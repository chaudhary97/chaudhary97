#include <iostream>

int main()
{
    int num1, num2, sum;
    
    //enter the two no.
    std::cout << "Enter the first number :" ;
    std::cin >> num1;
    std::cout << "Enter the second number :";
    std::cin >> num2;
    //Add two no.
    sum = num1+num2;
    // To print the sum of no
    std::cout << "Sum of the number is" << num1 << "and" << num2 << "is:" << sum << std :: endl;
    return 0;
}