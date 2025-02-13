#include <iostream>
#include <string>

using namespace std;

union Employ {
    int x;
    float salary;
    char id;
};

int main() {
    union Employ An;

    // Initialize the salary member
    An.salary = 50000.0f; // Assign a value to the salary

    // Output the salary
    cout << "Salary: " << An.salary << endl;

    return 0;
}