#include<iostream>

using namespace std;

class Car {
    private:
    int carNumber;
    char car_model[10] ;

    public :
    void getData() {
       cout << "Enter car number is :";
       cin >>carNumber;
       cout<< "Enter car model is :";
       cin>>car_model;
    }
    void showData(){
       cout<<"car number is"<< carNumber<<"\n";
       cout<<"car model is"<< car_model<<"\n";
    }
    };

    int main(){
    Car myCar;
    myCar.getData();
    myCar.showData();
    return 0;
}


