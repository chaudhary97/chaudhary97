function processPayment() {
    const amountInput = document.getElementById('amount');
    const cardNumberInput = document.getElementById('card-number');
    const expiryInput = document.getElementById('expiry');
    const cvvInput = document.getElementById('cvv');

    const amount = parseInt(amountInput.value);
    const cardNumber = cardNumberInput.value.trim();
    const expiry = expiryInput.value.trim();
    const cvv = cvvInput.value.trim();

    if (isNaN(amount) || amount < 200 || amount > 1000) {
        alert("Please enter a valid amount between 200 and 1000 INR.");
        return;
    }

    if (!cardNumber || !expiry || !cvv) {
        alert("Please fill in all fields.");
        return;
    }

    // Here you can implement the actual payment processing logic
    alert(`Payment processed successfully! Amount: ₹${amount}`);
    // Reset form fields after successful payment
    amountInput.value = '';
    cardNumberInput.value = '';
    expiryInput.value = '';
    cvvInput.value = '';
}
