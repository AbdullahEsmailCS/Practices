#include <iostream>
#include <string>
#include <cmath>

enum class NumberType { PRIME, NOT_PRIME };

float ReadPositiveNumber(const std::string& message)
{
    float number = 0;
    do
    {
        std::cout << message << std::endl;
        std::cin >> number;
    } while (number <= 0);
    return number;
}

NumberType CheckNumberType(int number)
{
    int limit = static_cast<int>(std::round(std::sqrt(number)));
    for (int counter = 2; counter <= limit; counter++)
    {
        if (number % counter == 0)
            return NumberType::NOT_PRIME;
    }
    return NumberType::PRIME;
}

void PrintNumberType(int number)
{
    switch (CheckNumberType(number))
    {
    case NumberType::PRIME:
        std::cout << "The number is prime." << std::endl;
        break;
    case NumberType::NOT_PRIME:
        std::cout << "The number is not prime." << std::endl;
        break;
    }
}

int main()
{
    int number = static_cast<int>(ReadPositiveNumber("Please enter a positive number"));
    PrintNumberType(number);

    return 0;
}