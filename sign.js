function signIn() {
    const email = document.getElementById('email').value.trim();
    const password = document.getElementById('password').value.trim();

    if (!email || !password) {
        alert("Please fill in all fields.");
        return;
    }

    // Here you can implement the sign-in logic
    alert("Sign in successful!");
    // Reset form fields after successful sign-in
    document.getElementById('email').value = '';
    document.getElementById('password').value = '';
}
