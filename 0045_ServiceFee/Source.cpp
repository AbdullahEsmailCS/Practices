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

float CalculateTotalBillAfterServiceAndTax(float totalBill)
{
    const float serviceFeeRate = 1.1f;
    const float salesTaxRate = 1.16f;
    float totalBillAfterServiceAndTax = totalBill * serviceFeeRate * salesTaxRate;
    return totalBillAfterServiceAndTax;
}

void PrintTotalBillAfterServiceAndTax()
{
    float totalBill = ReadPositiveNumber("Please enter the total bill: ");
    std::cout << std::endl;
    std::cout << "Total Bill = " << totalBill << std::endl;
    std::cout << "Total Bill After Service Fee and Sales Tax = "
        << CalculateTotalBillAfterServiceAndTax(totalBill) << std::endl;
}

int main()
{
    PrintTotalBillAfterServiceAndTax();
    return 0;
}