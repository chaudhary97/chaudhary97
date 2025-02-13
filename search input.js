document.addEventListener("DOMContentLoaded", function() {
  const searchInput = document.getElementById('searchInput');
  const searchHistory = document.getElementById('searchHistory');

  // Function to display search history
  function displaySearchHistory(history) {
    searchHistory.innerHTML = '';
    history.forEach(function(item) {
      const li = document.createElement('li');
      li.textContent = item;
      li.addEventListener('click', function() {
        searchInput.value = item;
        searchHistory.style.display = 'none';
        // Perform search based on selected history item
        performSearch(item);
      });
      searchHistory.appendChild(li);
    });
  }

  // Function to perform search
  function performSearch(query) {
    // Your search logic goes here
    console.log("Performing search for:", query);
  }

  // Event listener for input in search field
  searchInput.addEventListener('input', function() {
    const query = this.value.trim();
    if (query !== '') {
      // Show search history
      searchHistory.style.display = 'block';
      // Dummy example: displaying search history
      displaySearchHistory(['apple', 'banana', 'orange']);
    } else {
      searchHistory.style.display = 'none';
    }
  });

  // Event listener for clicking outside the search history
  document.addEventListener('click', function(e) {
    if (!searchHistory.contains(e.target) && e.target !== searchInput) {
      searchHistory.style.display = 'none';
    }
  });
});
