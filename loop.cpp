#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter the value of x,y ";
    cin>>x>>y;

    if(x>y){
        cout<<"x is greater than y";
    }
    if(x=y){
        cout<<"x is equal to y";
    }
    else{
        cout<<"y is greater than x";
    }
    
    return 0;
}