if('serviceWorker' in navigator){
    navigator.serviceWorker.register('sw.js')
        .then((reg) => console.log('service Worker registered!',reg))
        .catch((err) => console.log('error, sw not registered!',err))
}

//This part is for FCM

// Import the functions you need from the SDKs you need
// TODO: Add SDKs for Firebase products that you want to use
// https://firebase.google.com/docs/web/setup#available-libraries

// Your web app's Firebase configuration
// For Firebase JS SDK v7.20.0 and later, measurementId is optional
const firebaseConfig = {
  apiKey: "AIzaSyB_GMNW3EGLC9SfbXM60oC53xSG_bHSfMk",
  authDomain: "nijigaku-traffic-radio.firebaseapp.com",
  projectId: "nijigaku-traffic-radio",
  storageBucket: "nijigaku-traffic-radio.appspot.com",
  messagingSenderId: "1057360519386",
  appId: "1:1057360519386:web:150333b9ddb4b98a1005e3",
  measurementId: "G-QXQQT912WH"
};



