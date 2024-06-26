#include <iostream>

double calculateGrossPay(int minutesWorked, double hourlyRate) {
    double hoursWorked = minutesWorked / 60.0;
    double grossPay = hoursWorked * hourlyRate;
    return grossPay;
}

double calculateTotalPayrollExpense(int numOfEmployees) {
    double totalPayrollExpense = 0.0;

    for (int i = 0; i < numOfEmployees; i++) {
        int minutesWorked;
        double hourlyRate;

        std::cout << "Enter the minutes worked for employee " << i + 1 << ": ";
        std::cin >> minutesWorked;

        std::cout << "Enter the hourly rate for employee " << i + 1 << ": ";
        std::cin >> hourlyRate;

        double grossPay = calculateGrossPay(minutesWorked, hourlyRate);
        totalPayrollExpense += grossPay;
    }

    return totalPayrollExpense;
}

int main() {
    int numOfEmployees;

    std::cout << "Enter the number of employees: ";
    std::cin >> numOfEmployees;

    double totalPayrollExpense = calculateTotalPayrollExpense(numOfEmployees);

    std::cout << "Total Payroll Expense: $" << totalPayrollExpense << std::endl;

    return 0;
}