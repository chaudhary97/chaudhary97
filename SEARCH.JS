document.getElementById("searchBtn").addEventListener("click", function() {
    var searchInput = document.getElementById("searchInput");
    var searchTerm = searchInput.value.trim();
    
    if (searchTerm !== "") {
        // Perform search operation, for example:
        alert("Searching for: " + searchTerm);
    } else {
        alert("Please enter a search term.");
    }
});
