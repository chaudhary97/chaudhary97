#include<iostream>
using namespace std;

 class Demo{
    int  val;
    public:
    Demo(int x=0){
        val=x;
    }
    int getvalue() const{
        return val;
    }
 };
    int main()
    {
        const Demo d(28);
        Demo d1(9);
        cout<<"Value using object: "<<d.getvalue()<<endl;
        cout<<"The value using object: "<<d1.getvalue()<<endl;
        return 0;
    }
 
    