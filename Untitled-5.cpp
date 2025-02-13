#include <iostream>
using namespace std;
class Ankit;
class Ankur;
void Rohan(Ankit r1, Ankur r2);
class Ankit{++

    
    private :
    int money=1000;
    friend void Rohan(Ankit r1, Ankur r2);

};
class Ankur{
    private :
    int money=800;
    friend void Rohan(Ankit r1, Ankur r2);

};
void Rohan(Ankit r1, Ankur r2){
    cout<<"Enter the money"<<r1.money+r2.money<<endl;
}
int main(){
    Ankit obj1;
    Ankur obj2;
    Rohan(obj1, obj2);
    return 0;
}