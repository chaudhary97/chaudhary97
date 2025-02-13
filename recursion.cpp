#include <iostream>
using namespace std;

// Function to calculate factorial
int Ankit(int a) {
    if (a == 0) {
        return 1; // Base case: factorial of 0 is 1
    } else {
        return a * Ankit(a - 1); // Recursive case
    }
}

int main() {
    int a;
    cout << "Enter a non-negative integer: "; // Improved prompt for clarity
    cin >> a;

    // Check if the input is a non-negative integer
    if (a < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int r = Ankit(a);
        cout << "Factorial of " << a << " is " << r << endl; // Improved output format
    }

    return 0; // Return 0 to indicate successful completion
}