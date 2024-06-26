#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const double PI = 3.14159;
const int Exponent = 2;
string EnterRadiusPrompt = "Enter the radius of the circle: ";
string AreaMessage = "The area of the circle is: ";

double ReadNumber(const string& prompt) {
    double number;
    do {
        cout << prompt;
        cin >> number;
    } while (number <= 0);
    return number;
}

double CalculateCircleArea(double radius) {
    return PI * pow(radius, Exponent);
}

void PrintResult(const string& message, double result) {
    cout << message << result << endl;
}

int main() {
    double radius;

    radius = ReadNumber(EnterRadiusPrompt);

    double area = CalculateCircleArea(radius);

    PrintResult(AreaMessage, area);

    return 0;
}