#include <iostream>

double calculatePayment(int minutesWorked, double hourlyRate) {
    double hoursWorked = minutesWorked / 60.0;
    double payment = hoursWorked * hourlyRate;
    return payment;
}

int main() {
    int minutesWorked;
    double hourlyRate;

    std::cout << "Enter the minutes worked: ";
    std::cin >> minutesWorked;

    std::cout << "Enter the hourly rate: ";
    std::cin >> hourlyRate;

    double payment = calculatePayment(minutesWorked, hourlyRate);

    std::cout << "Payment: $" << payment << std::endl;

    return 0;
}