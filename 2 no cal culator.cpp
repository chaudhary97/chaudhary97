#include<iostream>
 using namespace std;
 
//Funtion to add two number
double add( double num1, double num2){
    return num1+num2;
}
//Funtion to subtract two number
double sub( double num1, double num2){
    return num1-num2;
}
//Funtion to multiply two number
double mul( double num1, double num2){
return num1*num2;
}
//Function to divide two number
double div( double num1, double num2){
    if(num1!=num2)
    return num1/num2;
    else{
        cout<<"Division by zero is not possible"<<endl;
        return 0;
    }}
    int main(){
        double num1, num2;
        char operation;
        
        cout << "Enter the first number :";
        cin >> num1;
        cout << "Enter the operation you want to perform (+,-,*,/):";
        cin >> operation;
cout << "Enter the second number :";
        cin >> num2;
            try {
        switch (operation) {
            case '+':
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case '-':
                cout << "Result: " << sub(num1, num2) << endl;
                break;
            case '*':
                cout << "Result: " << mul(num1, num2) << endl;
                break;
            case '/':
                cout << "Result: " << div(num1, num2) << endl;
                break;
            default:
                cout << "Invalid operation!" << endl;
                break;
        }
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
    }


        

    
