#include <iostream>

int readTotalSales()
{
    int totalSales;
    std::cout << "Please enter the total sales: ";
    std::cin >> totalSales;
    return totalSales;
}

float getCommissionPercentage(float totalSales)
{
    if (totalSales >= 1000000)
        return 0.01;
    else if (totalSales >= 500000)
        return 0.02;
    else if (totalSales >= 100000)
        return 0.03;
    else if (totalSales >= 50000)
        return 0.05;
    else
        return 0.00;
}

float calculateTotalCommission(float totalSales)
{
    return getCommissionPercentage(totalSales) * totalSales;
}

int main()
{
    float totalSales = readTotalSales();
    std::cout << std::endl << "Commission Percentage = "
        << getCommissionPercentage(totalSales) << std::endl;
    std::cout << std::endl << "Total Commission = "
        << calculateTotalCommission(totalSales) << std::endl;

    return 0;
}