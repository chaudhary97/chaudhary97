document.addEventListener("DOMContentLoaded", function() {
    const bookDetails = document.getElementById('book-details');

    // Dummy book data
    const book = {
        title: "The Customer Service Book",
        author: "John Doe",
        price: "$19.99",
        description: "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam accumsan nisi vitae nunc fermentum, auctor varius tortor auctor. Morbi nec mauris rhoncus, tempor odio ut, commodo turpis. Vestibulum non purus nec sapien laoreet luctus. Nam eu felis arcu.",
        imageUrl: "https://via.placeholder.com/300x400"
    };

    // Create HTML elements for book details
    const bookDiv = document.createElement('div');
    bookDiv.innerHTML = `
        <img src="${book.imageUrl}" alt="${book.title}">
        <h2>${book.title}</h2>
        <p class="label">Author:</p>
        <p>${book.author}</p>
        <p class="label">Price:</p>
        <p>${book.price}</p>
        <p class="label">Description:</p>
        <p>${book.description}</p>
        <div class="btn-container">
            <button class="button">Add to Cart</button>
        </div>
    `;

    // Append book details to the container
    bookDetails.appendChild(bookDiv);
});
