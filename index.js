// script.js

function showHome() {
    document.getElementById('main-content').innerHTML = `<section><h2>Welcome to our Online Bookstore!</h2><p>Explore our collection of books and find your next favorite read.</p></section>`;
}

function showBooks() {
    document.getElementById('main-content').innerHTML = `<section><h2>Featured Books</h2><div class="book">Book 1</div><div class="book">Book 2</div><div class="book">Book 3</div></section>`;
}

function showAbout() {
    document.getElementById('main-content').innerHTML = `<section><h2>About Us</h2><p>We are passionate about books and aim to provide a convenient platform for book lovers to discover and purchase their favorite titles.</p></section>`;
}

function showContact() {
    document.getElementById('main-content').innerHTML = `<section><h2>Contact Us</h2><p>Have a question or feedback? Feel free to reach out to us at contact@onlinebookstore.com</p></section>`;
}

// Show home page by default
showHome();
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
