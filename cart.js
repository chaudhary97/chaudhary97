const cart = [];

function addToCart(item) {
    cart.push(item);
    updateCart();
}

function updateCart() {
    const cartItems = document.getElementById('cart-items');
    const totalElement = document.getElementById('total');
    let total = 0;
    cartItems.innerHTML = '';
    cart.forEach(item => {
        const li = document.createElement('li');
        li.textContent = `${item.name} - ₹${item.price}`;
        const removeButton = document.createElement('button');
        removeButton.textContent = 'Remove';
        removeButton.addEventListener('click', () => removeFromCart(item));
        li.appendChild(removeButton);
        cartItems.appendChild(li);
        total += item.price;
    });
    totalElement.textContent = total.toFixed(2);
}

function removeFromCart(item) {
    const index = cart.indexOf(item);
    if (index !== -1) {
        cart.splice(index, 1);
        updateCart();
    }
}

function checkout() {
    alert('Checkout functionality will be implemented in the future!');
}
