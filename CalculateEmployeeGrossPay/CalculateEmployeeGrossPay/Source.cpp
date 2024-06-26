#include <iostream>

int main() {
    double hoursWorked;
    double hourlyRate;

    std::cout << "Enter the number of hours worked: ";
    std::cin >> hoursWorked;

    std::cout << "Enter the hourly rate: ";
    std::cin >> hourlyRate;

    double grossPay = hoursWorked * hourlyRate;

    std::cout << "Gross Pay: $" << grossPay << std::endl;

    return 0;
}