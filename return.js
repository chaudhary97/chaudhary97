function submitReturn() {
    const orderId = document.getElementById('order-id').value.trim();
    const reason = document.getElementById('reason').value.trim();

    if (!orderId || !reason) {
        alert("Please fill in all fields.");
        return;
    }

    // Here you can implement the return submission logic
    alert("Return order submitted successfully!");
    // Reset form fields after successful submission
    document.getElementById('order-id').value = '';
    document.getElementById('reason').value = '';
}
