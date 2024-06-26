#include <iostream>
#include <iomanip>
#include <string>

struct Employee {
    std::string name;
    int employeeId;
    double hoursWorked;
    double hourlyRate;
    double taxRate;
    double otherDeductions;
};

void generatePayslip(const Employee& employee) {
    double grossPay = employee.hoursWorked * employee.hourlyRate;
    double taxAmount = grossPay * employee.taxRate;
    double netPay = grossPay - taxAmount - employee.otherDeductions;

    std::cout << "Employee Name: " << employee.name << std::endl;
    std::cout << "Employee ID: " << employee.employeeId << std::endl;
    std::cout << "Hours Worked: " << employee.hoursWorked << std::endl;
    std::cout << "Hourly Rate: $" << std::fixed << std::setprecision(2) << employee.hourlyRate << std::endl;
    std::cout << "Gross Pay: $" << std::fixed << std::setprecision(2) << grossPay << std::endl;
    std::cout << "Tax Amount: $" << std::fixed << std::setprecision(2) << taxAmount << std::endl;
    std::cout << "Other Deductions: $" << std::fixed << std::setprecision(2) << employee.otherDeductions << std::endl;
    std::cout << "Net Pay: $" << std::fixed << std::setprecision(2) << netPay << std::endl;
}

int main() {
    Employee employee;

    std::cout << "Enter Employee Name: ";
    std::getline(std::cin, employee.name);

    std::cout << "Enter Employee ID: ";
    std::cin >> employee.employeeId;

    std::cout << "Enter Hours Worked: ";
    std::cin >> employee.hoursWorked;

    std::cout << "Enter Hourly Rate: ";
    std::cin >> employee.hourlyRate;

    std::cout << "Enter Tax Rate: ";
    std::cin >> employee.taxRate;

    std::cout << "Enter Other Deductions: ";
    std::cin >> employee.otherDeductions;

    // Clear the input buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << std::endl;
    generatePayslip(employee);

    return 0;
}