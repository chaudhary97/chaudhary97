window.addEventListener('load', function() {
    showNavLoader(); // Show the loader when the page loads

    // Simulating a delay of 2 seconds before hiding the loader
    setTimeout(function() {
        hideNavLoader();
    }, 2000);
});

function showNavLoader() {
    const navLoader = document.getElementById('navLoader');
    if (navLoader) {
        navLoader.style.display = 'flex';
    }
}

function hideNavLoader() {
    const navLoader = document.getElementById('navLoader');
    if (navLoader) {
        navLoader.style.display = 'none';
    }
}