const functions = require("firebase-functions");
const admin = require('firebase-admin');

admin.initializeApp();

exports.registerCar = functions.https.onCall((data, context) => {
    let carId = data.car_id;
    let fcmToken = data.token;

    let db = admin.database().ref('users');
    db.child(carId).set({ token: fcmToken });
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

        const tokenPromise = admin.database().ref('users').orderByChild('token').once('value');
        let tokensSnapshot = await Promise.resolve(tokenPromise);

        if (!tokensSnapshot.hasChildren()) return; // TODO: timeout at this line

        let tokens = Object.keys(tokensSnapshot[0].val());

        const response = await admin.messaging().sendToDevice(tokens, payload);

        const tokensToRemove = [];
        response.results.forEach((result, index) => {
            const error = result.error;
            if (error) {
                // Cleanup the tokens who are not registered anymore.
                if (error.code === 'messaging/invalid-registration-token' ||
                    error.code === 'messaging/registration-token-not-registered') {
                    tokensToRemove.push(tokensSnapshot.ref.child(tokens[index]).remove());
                }

                functions.logger.log('error in removing tokens');
            }
        });

        await Promise.all(tokensToRemove);

        functions.logger.log("notification pushed");

        res.status(200).send("crash happened");
    }
    else res.status(200).send("no crash");
});