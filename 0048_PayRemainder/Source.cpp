#include <iostream>
#include <string>

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

float CalculateRemainder(float totalBill, float totalCashPaid)
{
    return totalCashPaid - totalBill;
}

void PrintRemainder()
{
    float totalBill = ReadPositiveNumber("Please enter the total bill:");
    float totalCashPaid = ReadPositiveNumber("Please enter the total cash paid:");
    std::cout << std::endl;
    std::cout << "Total Bill = " << totalBill << std::endl;
    std::cout << "Total Cash Paid = " << totalCashPaid << std::endl;
  
    std::cout << "Remainder = " << CalculateRemainder(totalBill, totalCashPaid) << std::endl;
}

int main()
{
    PrintRemainder();
    return 0;
}