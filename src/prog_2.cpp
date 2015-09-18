#include <iostream>

int main()
{
    // Variable declaration
    int number1, number2, sum;
   

    std::cout << "Introduce the first number: ";
    std::cin >> number1;

    std::cout << "Introduce the second number: ";
    std::cin >> number2;

    sum = number1 + number2;

    std::cout << "The sum is " << sum << std::endl; // Show the sum, end of line
    return 0;

}
