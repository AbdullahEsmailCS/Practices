#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const double Pi = 3.14159;
const string EnterDiameterPrompt = "Enter the diameter of the circle: ";
const string AreaMessage = "The area of the circle is: ";

double ReadNumber(const string& prompt) {
    double number;
    do {
        cout << prompt;
        cin >> number;
        if (number <= 0) {
            cout << "Invalid input. Please enter a positive value." << endl;
        }
    } while (number <= 0);
    return number;
}

double CalculateCircleArea(double diameter) {
    double radius = diameter / 2.0;
    return Pi * pow(radius, 2);
}

void PrintResult(const string& message, double result) {
    cout << message << result << endl;
}

int main() {
    double diameter = ReadNumber(EnterDiameterPrompt);
    double area = CalculateCircleArea(diameter);
    PrintResult(AreaMessage, area);

    return 0;
}