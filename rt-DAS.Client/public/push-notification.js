import firebase from 'firebase/app';
export const initializeFirebase = () => {
  firebase.initializeApp({
    apiKey: "AIzaSyB_GMNW3EGLC9SfbXM60oC53xSG_bHSfMk",
    authDomain: "nijigaku-traffic-radio.firebaseapp.com",
    projectId: "nijigaku-traffic-radio",
    storageBucket: "nijigaku-traffic-radio.appspot.com",
    messagingSenderId: "1057360519386",
    appId: "1:1057360519386:web:150333b9ddb4b98a1005e3",
    measurementId: "G-QXQQT912WH"
  });
}