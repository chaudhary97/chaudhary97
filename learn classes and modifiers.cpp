#include <iostream>
using namespace std;
class Base1
{
    private:
    int a,b;
    public:
    int c,d;
    void setData(int a1, int b1);
    void showData(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
        cout<<"d = "<<d<<endl;

    }
    };
    void Base1::setData(int a1, int b1){
        a=a1;
        b=b1;

    }
    int main(){
Base1 obj;
obj.c=400;
obj.d=300;
obj.setData(20,30);
obj.showData();
return 0;

    }


