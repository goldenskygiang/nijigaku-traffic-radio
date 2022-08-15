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

exports.pingPosition = functions.https.onCall(async (data, context) => {
    if (data.is_crash) {
        const payload = {
            notification: {
                title: "Nearby accident occured",
                body: `Car ${data.car_id} at ${data.road_name}.\nContact the authority if necessary.`
            }
        };

        const queryToken = admin.database().ref('users').orderByChild('token').once('value');
        const tokensSnapshot = await Promise.all(queryToken);

        if (!tokensSnapshot.hasChildren()) return;

        let tokens = Object.keys(tokensSnapshot.val());

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

        return Promise.all(tokensToRemove);
    }
});