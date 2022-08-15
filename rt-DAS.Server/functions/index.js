const functions = require("firebase-functions");

// // Create and Deploy Your First Cloud Functions
// // https://firebase.google.com/docs/functions/write-firebase-functions
//
// exports.helloWorld = functions.https.onRequest((request, response) => {
//   functions.logger.info("Hello logs!", {structuredData: true});
//   response.send("Hello from Firebase!");
// });

const admin = require('firebase-admin');
admin.initializeApp();

exports.registerCar = functions.https.onCall((data, context) => {
    let carId = data.car_id;
    let fcmToken = data.token;

    let db = admin.database().ref('users');
    db.child(carId).set({token: fcmToken});
});

exports.pingPosition = functions.https.onRequest(async (req, res) => {
    if (req.body.is_crash) {

        const payload = {
            notification: {
                title: "Nearby accident occured",
                body: `Car ${req.body.car_id} at ${req.body.road_name}.\nContact the authority if necessary.`
            }
        };

        const queryToken = admin.database().ref('users').orderByChild('token').once('value');
        const tokensSnapshot = await Promise.all([queryToken]);

        if (!tokensSnapshot[0].hasChildren()) return;

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
            }
        });

        await Promise.all(tokensToRemove);
    }

    return res.status(200);
});