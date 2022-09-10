  // Retrieve Firebase Messaging object.
  const messaging = firebase.messaging();

  // IDs of divs that display registration token UI or request permission UI.
  const tokenDivId = 'token_div';
  const permissionDivId = 'permission_div';

  // Handle incoming messages. Called when:
  // - a message is received while the app has focus
  // - the user clicks on an app notification created by a service worker
  //   `messaging.onBackgroundMessage` handler.
  messaging.onMessage((payload) => {

    console.log('Message received. ', typeof(payload), payload);
    // Update the UI to include the received message.
    appendMessage(payload);

    const notificationTitle = 'Background Message Title';
    const notificationOptions = {
    body: 'Background Message body.',
    icon: '/firebase-logo.png'
        };

    registration.showNotification(notificationTitle, notificationOptions);
  });

  function resetUI() {

    showToken('token is loading...');
    // Get registration token. Initially this makes a network call, once retrieved
    // subsequent calls to getToken will return from cache.
    messaging.getToken({vapidKey: 'BNxAEElLuMcjhePZpC_YVjTKb3JE41_Bi7rklyFQRVhil0KhHMGwJkJjP8x-MuTHTtK5Tmoper5i5OAIBuUz4tI'}).then((currentToken) => {
      if (currentToken) {
        sendTokenToServer(currentToken);
        updateUIForPushEnabled(currentToken);
      } else {
        // Show permission request.
        console.log('No registration token available. Request permission to generate one.');
        // Show permission UI.
        updateUIForPushPermissionRequired();
        setTokenSentToServer(false);
      }
    }).catch((err) => {
      console.log('An error occurred while retrieving token. ', err);
      showToken('Error retrieving registration token. ', err);
      setTokenSentToServer(false);
    });
  }

  function showToken(currentToken) {
    console.log(currentToken);
  }

  // Send the registration token your application server, so that it can:
  // - send messages back to this app
  // - subscribe/unsubscribe the token from topics
  function sendTokenToServer(currentToken) {
    if (!isTokenSentToServer()) {
      console.log('Sending token to server...');
      
      
      var addMessage = firebase.functions().httpsCallable('addMessage');
      addMessage({ text: messageText })
        .then((result) => {
        // Read result of the Cloud Function.
          var sanitizedMessage = result.data.text;
        })
        .catch((error) => {
          // Getting the Error details.
          var code = error.code;
          var message = error.message;
          var details = error.details;
          // ...
        });



      setTokenSentToServer(true);
    } else {
      console.log('Token already sent to server so won\'t send it again ' +
          'unless it changes');
    }
  }

  function isTokenSentToServer() {
    return window.localStorage.getItem('sentToServer') === '1';
  }

  function setTokenSentToServer(sent) {
    window.localStorage.setItem('sentToServer', sent ? '1' : '0');
  }

  function requestPermission() {
    console.log('Requesting permission...');
    Notification.requestPermission().then((permission) => {
      if (permission === 'granted') {
        console.log('Notification permission granted.');
        // TODO(developer): Retrieve a registration token for use with FCM.
        // In many cases once an app has been granted notification permission,
        // it should update its UI reflecting this.
        resetUI();
      } else {
        console.log('Unable to get permission to notify.');
      }
    });
  }

  // Add a message to the messages element.
  function appendMessage(payload) {
    const messagesElement = document.getElementById("news");
    messagesElement.innerHTML = payload.notification.body;
  }

  function updateUIForPushEnabled(currentToken) {
    showToken(currentToken);
    const tit = document.getElementById("Title");
    tit.innerHTML = "Traffic Radio 🟢";
  }

  resetUI();