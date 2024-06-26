#include <iostream>

double calculateGrossPay(int minutesWorked, double hourlyRate) {
    double hoursWorked = minutesWorked / 60.0;
    double grossPay = hoursWorked * hourlyRate;
    return grossPay;
}

double calculateNetPay(double grossPay, double taxRate, double otherDeductions) {
    double taxAmount = grossPay * taxRate;
    double netPay = grossPay - taxAmount - otherDeductions;
    return netPay;
}

int main() {
    int minutesWorked;
    double hourlyRate;
    double taxRate;
    double otherDeductions;

    std::cout << "Enter the minutes worked: ";
    std::cin >> minutesWorked;

    std::cout << "Enter the hourly rate: ";
    std::cin >> hourlyRate;

    std::cout << "Enter the tax rate (in decimal form): ";
    std::cin >> taxRate;

    std::cout << "Enter other deductions: ";
    std::cin >> otherDeductions;

    double grossPay = calculateGrossPay(minutesWorked, hourlyRate);
    double netPay = calculateNetPay(grossPay, taxRate, otherDeductions);

    std::cout << "Gross Pay: $" << grossPay << std::endl;
    std::cout << "Net Pay: $" << netPay << std::endl;

    return 0;
}