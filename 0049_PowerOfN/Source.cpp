#include <iostream>

int readNumber()
{
    int number;
    std::cout << "Please enter a number: ";
    std::cin >> number;
    return number;
}

int readPower()
{
    int power;
    std::cout << "Please enter the power: ";
    std::cin >> power;
    return power;
}

int powerOfM(int number, int power)
{
    // Any number to the power of 0 is always 1.
    if (power == 0)
        return 1;

    int result = 1;
    for (int i = 1; i <= power; i++)
    {
        result *= number;
    }
    return result;
}

int main()
{
    int number = readNumber();
    int power = readPower();

    int result = powerOfM(number, power);
    std::cout << "Result = " << result << std::endl;

    return 0;
}