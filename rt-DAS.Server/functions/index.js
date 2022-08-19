const functions = require("firebase-functions");
const admin = require('firebase-admin');

admin.initializeApp();

exports.registerCar = functions.https.onCall((data, context) => {
    let carId = data.car_id;
    let fcmToken = data.token;

    let db = admin.database().ref('users');
    db.child(carId).set(fcmToken);
});

exports.pingPosition = functions.https.onRequest(async (req, res) => {

    functions.logger.log(req.body);

    if (req.body.is_crash) {
        const payload = {
            notification: {
                title: "Nearby accident occured",
                body: `Car ${req.body.car_id} at ${req.body.road_name}.\nContact the authority if necessary.`
            }
        };

        functions.logger.log(payload);

        const users = admin.database().ref('users');

        let tokens = [];
        users.orderByKey().on("child_added", (snapshot) => {
            tokens.push(snapshot.val());
        });

        if (tokens.length == 0) {
            res.status(200).send("no device to push notification");
            return;
        }

        const response = await admin.messaging().sendToDevice(tokens, payload);

        // const tokensToRemove = [];
        // response.results.forEach((result, index) => {
        //     const error = result.error;
        //     if (error) {
        //         // Cleanup the tokens who are not registered anymore.
        //         if (error.code === 'messaging/invalid-registration-token' ||
        //             error.code === 'messaging/registration-token-not-registered') {
        //             tokensToRemove.push(users.ref.child(tokens[index]).remove());
        //         }

        //         functions.logger.log('error in removing tokens');
        //     }
        // });

        // await Promise.all(tokensToRemove);

        functions.logger.log("notification pushed");

        res.status(200).send("crash happened");
    }
    else res.status(200).send("no crash");
});