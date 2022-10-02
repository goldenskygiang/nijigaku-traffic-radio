const functions = require("firebase-functions").region('asia-southeast1');
const admin = require('firebase-admin');

admin.initializeApp();

exports.registerCar = functions.https.onCall((data, context) => {
    let carId = data.car_id;
    let fcmToken = data.token;

    let db = admin.database().ref('users');
    db.child(carId).set(fcmToken);
});

exports.pingPosition = functions.https.onRequest(async (req, res) => {
    res.set('Access-Control-Allow-Origin', '*');
    res.set('Access-Control-Allow-Headers', '*');

    if (req.body.is_crash) {
        const payload = {
            notification: {
                title: "Nearby accident occured",
                body: `Accident occured at ${req.body.road_name} with Car ${req.body.car_id}.`
            },
            data: {
                json: JSON.stringify(req.body)
            }
        };

        const users = admin.database().ref('users');

        let snapshot = await users.once("value");
        let vehicles = snapshot.val();

        let tokens = [];
        for (const [key, val] of Object.entries(vehicles)) {
            tokens.push(val);
        }

        if (tokens.length == 0) {
            res.status(404).send("no device to push notification");
            return;
        }

        await admin.messaging().sendToDevice(tokens, payload);

        res.status(201).send("crash happened");
    }
    else res.status(200).send("no crash");
});