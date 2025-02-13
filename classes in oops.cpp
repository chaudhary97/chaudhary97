#include<iostream>
using namespace std;

class employee{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1); // Declaration
    void showdata(){
        cout << "the value of a " << a << endl;
        cout << "the value of b " << b << endl;
        cout << "the value of c " << c << endl;
        cout << "the value of d " << d << endl;
        cout << "the value of e " << e << endl;
    }
};

void employee::setdata(int a1, int b1, int c1){
    this->a = a1; // or simply a = a1;
    this->b = b1; // or simply b = b1;
    this->c = c1; // or simply c = c1;
}

int main()
{
    employee ankit;
    ankit.d = 32;
    ankit.e=90;
    ankit.setdata(1, 2, 3);
    ankit.showdata();
    return 0;
}