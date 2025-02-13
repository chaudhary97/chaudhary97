document.addEventListener("DOMContentLoaded", function() {
    const registrationForm = document.getElementById('registration-form');

    registrationForm.addEventListener('submit', function(event) {
        event.preventDefault();

        const formData = new FormData(this);
        const username = formData.get('username');
        const email = formData.get('email');
        const password = formData.get('password');

        // You can perform validation here before sending the data to the server
        // For demonstration, let's just log the form data
        console.log('Username:', username);
        console.log('Email:', email);
        console.log('Password:', password);

        // You can also send the form data to the server using fetch or other methods
        // fetch('your-api-endpoint', {
        //     method: 'POST',
        //     body: JSON.stringify({ username, email, password }),
        //     headers: {
        //         'Content-Type': 'application/json'
        //     }
        // })
        // .then(response => response.json())
        // .then(data => {
        //     // Handle response from server
        // })
        // .catch(error => {
        //     console.error('Error:', error);
        // });
    });
});
