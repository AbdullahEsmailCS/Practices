#include <iostream>

double calculateGrossPay(int minutesWorked, double hourlyRate) {
    double hoursWorked = minutesWorked / 60.0;
    double grossPay = hoursWorked * hourlyRate;
    return grossPay;
}

double calculateOvertimePay(int minutesWorked, double hourlyRate, double overtimeRate, int overtimeThreshold) {
    double regularHours = overtimeThreshold / 60.0;
    double overtimeHours = (minutesWorked - overtimeThreshold) / 60.0;
    double overtimePay = overtimeHours * (hourlyRate * overtimeRate);
    double regularPay = regularHours * hourlyRate;
    double totalPay = regularPay + overtimePay;
    return totalPay;
}

double calculateTotalPayrollExpense(int numOfEmployees, double overtimeRate, int overtimeThreshold) {
    double totalPayrollExpense = 0.0;

    for (int i = 0; i < numOfEmployees; i++) {
        int minutesWorked;
        double hourlyRate;

        std::cout << "Enter the minutes worked for employee " << i + 1 << ": ";
        std::cin >> minutesWorked;

        std::cout << "Enter the hourly rate for employee " << i + 1 << ": ";
        std::cin >> hourlyRate;

        double totalPay;

        if (minutesWorked > overtimeThreshold) {
            totalPay = calculateOvertimePay(minutesWorked, hourlyRate, overtimeRate, overtimeThreshold);
        }
        else {
            totalPay = calculateGrossPay(minutesWorked, hourlyRate);
        }

        totalPayrollExpense += totalPay;
    }

    return totalPayrollExpense;
}

int main() {
    int numOfEmployees;
    double overtimeRate;
    int overtimeThreshold;

    std::cout << "Enter the number of employees: ";
    std::cin >> numOfEmployees;

    std::cout << "Enter the overtime rate (e.g., 1.5 for time and a half): ";
    std::cin >> overtimeRate;

    std::cout << "Enter the overtime threshold in minutes: ";
    std::cin >> overtimeThreshold;

    double totalPayrollExpense = calculateTotalPayrollExpense(numOfEmployees, overtimeRate, overtimeThreshold);

    std::cout << "Total Payroll Expense: $" << totalPayrollExpense << std::endl;

    return 0;
}