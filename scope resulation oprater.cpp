#include<iostream>

// using namespace std;

class Car {
    private:
        int carNumber;
        char carModel[10];

    public:
        void getData() {
            std::cout << "Enter car number: ";
            std::cin >> carNumber;
            std::cout << "Enter car model: ";
            std::cin >> carModel;
        }

        void showData() {
            std::cout << "Car number is: " << carNumber << std::endl;
            std::cout << "Car model is: " << carModel << std::endl;
        }
};

int main() {
    Car myCar;
    myCar.getData();
    myCar.showData();
    return 0;
}