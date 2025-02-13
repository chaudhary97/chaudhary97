#include<iostream>
using namespace std;

 class A{
    public:
    static int x; // declare x as a static member variable

    A(){
        std::cout<<"A contruct called"<< std::endl;
        }
};
int A :: x=2;//Define as static memeber variable
int main()
{
    A ojt;
    std::cout << "Accessing static data membere" <<A::x <<std::endl;
    return 0;
    }