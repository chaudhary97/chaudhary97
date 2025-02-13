#include <iostream>
using namespace std;
int Ankit(int a){
    if(a==0){
        return 1;
    }
    else{
        return a*Ankit(a-1);
    }
}
int main(){
    int a;
    cout<<"Enter the a"<<endl;
    cin>>a;
    int r=Ankit(a);
    cout<<a<<r<<endl<<endl;

}