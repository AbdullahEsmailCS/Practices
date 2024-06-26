#include <iostream>
#include <cmath>
#include <string>

using namespace std;
const float PI = 3.14;
const double Sqrt3 = 1.73205;
const string EnterSideLengthPrompt = "Enter the side length of the equilateral triangle: ";
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

double CalculateCircleAreaByTriangle(double sideLength) {
    double radius = sideLength / (2.0 * Sqrt3);
    return PI * pow(radius, 2);
}

void PrintResult(const string& message, double result) {
    cout << message << result << endl;
}

int main() {
    double sideLength = ReadNumber(EnterSideLengthPrompt);
    double area = CalculateCircleAreaByTriangle(sideLength);
    PrintResult(AreaMessage, area);

    return 0;
}