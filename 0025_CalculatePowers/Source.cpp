#include <iostream>

int readNumber()
{
    int number;
    std::cout << "Please enter a number: ";
    std::cin >> number;
    return number;
}

void calculatePowers(int number)
{
    int square = number * number;
    int cube = square * number;
    int quad = cube * number;

    std::cout << "Powers of " << number << ": " << square << " " << cube << " " << quad << std::endl;
}

int main()
{
    int inputNumber = readNumber();
    calculatePowers(inputNumber);

    return 0;
}