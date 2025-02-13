#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array
    int scores[5] = {10, 20, 30, 40, 50};

    // Print the array elements
    cout << "Array Elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "scores[" << i << "] = " << scores[i] << endl;
    }

    // Ask the user to input a new score
    int newScore;
    cout << "Enter a new score: ";
    cin >> newScore;

    // Assign the new score to the first element
    scores[0] = newScore;

    // Print the updated array elements
    cout << "Updated Array Elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "scores[" << i << "] = " << scores[i] << endl;
    }

    // Calculate the sum of the array elements
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += scores[i];
    }

    // Print the sum
    cout << "Sum of Array Elements: " << sum << endl;

    return 0;
}