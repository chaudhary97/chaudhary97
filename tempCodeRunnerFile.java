#include<iostream>
using namespace std;
 class Base1{
    int data1;
    public:
    Base1(int i){
        data1=i;
        cout<<"Base1 class constructor call"<<endl;
 }
  void printData1(void){
    cout<<"The value of Data1 is"<<data1<<endl;
 }
 };
 class Base2{
    int data2;
    public:
    Base2(int i)
    {
        data2=i;
        cout<<"Base2 class constructor call"<<endl;
 }
  void printData2(void){
    cout<<"The value of Data2 is"<<data2<<endl;
 }
 };
 class Derive:public Base1, public Base2{
    int Derive1, Derive2;
    public:
    Derive(int a, int b, int c, int d):Base1(a),Base2(b){
        Derive1=c; 
        Derive2=d;
        }
        void printDerive(void){
    cout<<"The value of Derive1 is"<< Derive1<<endl;
    cout<<"The value of Derive2 is"<<Derive2<<endl;
    }
    };
    void main(){
        Derive Ankit(10,20,30,40);
       
       Ankit.printData1();
       Ankit.printData2();
        Ankit.printDerive();
       
    }