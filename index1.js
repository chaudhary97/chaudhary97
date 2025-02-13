document.addEventListener('DOMContentLoaded', function() {
    // Get all elements with the class name 'border' and add event listeners to toggle border on hover
    const borders = document.querySelectorAll('.border');
    borders.forEach(border => {
        border.addEventListener('mouseover', function() {
            this.style.border = '1.5px solid white';
        });
        border.addEventListener('mouseout', function() {
            this.style.border = '1.5px solid transparent';
        });
    });

    // Toggle hover class for nav-search on mouseover
    const navSearch = document.querySelector('.nav-search');
    navSearch.addEventListener('mouseover', function() {
        this.classList.add('hover');
    });
    navSearch.addEventListener('mouseout', function() {
        this.classList.remove('hover');
    });

    // Toggle hover class for 'Deliver to India' on mouseover
    const deliverToIndia = document.querySelector('.nav-address');
    deliverToIndia.addEventListener('mouseover', function() {
        this.classList.add('hover');
    });
    deliverToIndia.addEventListener('mouseout', function() {
        this.classList.remove('hover');
    });

    // Handle clicking on search icon
    const searchIcon = document.querySelector('.search-icon');
    searchIcon.addEventListener('click', function() {
        const searchInput = document.querySelector('.search-input');
        const searchQuery = searchInput.value.trim();
        if (searchQuery !== '') {
            // Implement your search functionality here
            alert(`Searching for: ${searchQuery}`);
        } else {
            alert('finde books from books Store!');
        }
    });

    // Handle clicking on nav-cart icon
    const navCart = document.querySelector('.nav.cart');
    navCart.addEventListener('click', function() {
        // Implement your cart functionality here
        alert('Cart clicked!');
    });

    // Handle clicking on 'Back to Top' in footer
    const backToTop = document.querySelector('.foot-panel1');
    backToTop.addEventListener('click', function() {
        window.scrollTo({
            top: 0,
            behavior: 'smooth'
        });
    });


    // Handle clicking on footer links
    const footerLinks = document.querySelectorAll('footer a');
    footerLinks.forEach(link => {
        link.addEventListener('click', function(event) {
            // Prevent default link behavior
            event.preventDefault();
            // Implement your link handling logic here
            alert(`Clicked on ${this.textContent}`);
        });
    });
   

    // Additional functionality can be added as needed
});
