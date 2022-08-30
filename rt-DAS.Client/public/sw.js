const staticCacheName = 'site-static';
const assets =[
    '',
    'index.html',
    'app.js',
    'style.css',
    'img/logo.png'
];

//install sw, to be filled with acessing cache
self.addEventListener('install', evt =>{
    //console.log('service worker installed');
    evt.waitUntil(
        caches.open(staticCacheName).then(cache =>{
        console.log('caching shell assets');
        cache.addAll(assets);
        })
    )
    
});
//Activate event (listening to acativate event)
self.addEventListener('activate', evt =>{
    //console.log('service worker activated');
});
//fetch event
self.addEventListener('fetch', evt =>{
    //console.log('fetch event', evt);
    evt.respondWith(
        caches.match(evt.request).then(cacheRes =>{
            return cacheRes || fetch(evt.request);
        })
    )
});