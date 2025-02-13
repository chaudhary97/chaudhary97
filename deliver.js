function submitDeliveryDetails() {
    const nameInput = document.getElementById('name');
    const addressInput = document.getElementById('address');
    const pincodeInput = document.getElementById('pincode');

    const name = nameInput.value.trim();
    const address = addressInput.value.trim();
    const pincode = pincodeInput.value.trim();

    if (!name || !address || !pincode) {
        alert("Please fill in all fields.");
        return;
    }

    // Here you can implement the delivery processing logic
    alert(`Delivery details submitted successfully!\nName: ${name}\nAddress: ${address}\nPincode: ${pincode}`);
    // Reset form fields after successful submission
    nameInput.value = '';
    addressInput.value = '';
    pincodeInput.value = '';
}
