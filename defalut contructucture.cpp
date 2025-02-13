//WRITE A PROGRAM TO DEMOSTRAIT THE USE OF ZERO ARGRUMENT AND PARAMETERS CONSTRUCTION;
#include<iostream>
using namespace std;

class Demo {
private:
int  a,b,c;

public:
Demo();
void set(
    int a,int b, int c);
    void print();
};

Demo::Demo(){
a=1; b=1; c=1;
}
void Demo:: set(int a,int b,int c)
{
    this->a=a;
    this->b=b;
    this->c=c;
    }

    void Demo::print()
    {
    cout<<"value of a:"<<a<<endl;
    cout<<"value of b:"<<b<<endl;
    cout<<"value of c:"<<c<<endl;
}
int main() {
    Demo obj = Demo(); //Defau99lt constructure

    obj.print();
    obj.set(10,20,30);
    obj.print();
return 0;
}
