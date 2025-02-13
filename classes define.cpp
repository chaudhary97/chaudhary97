#include<iostream>

using namespace std;

class Car {
    private:
        int carNumber;
        char carModel;

    public:
        void getData() {
            cout << "Enter car number: ";
            cin >> carNumber;
            cout << "Enter car model: ";
            cin >> carModel;
        }

        void showData() {
            cout << "Car number is: \n " << carNumber;
            cout << "Car model is: \n " << carModel ;
        }
};

int main() {
    Car myCar;
    myCar.getData();
    myCar.showData();
    return 0;
}