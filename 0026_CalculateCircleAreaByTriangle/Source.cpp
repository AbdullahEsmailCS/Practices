#include <iostream>
#include <cmath>
#include <string>

using namespace std;
const float M_PI = 3.14;
const string EnterTriangleSidePrompt = "Enter the length of a side of the triangle: ";
const string AreaMessage = "The area of the circle inscribed in the triangle is: ";

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

double CalculateCircleAreaByTriangle(double triangleSide) {
    double radius = triangleSide / (2 * sqrt(3));
    return M_PI * pow(radius, 2);
}

void PrintResult(const string& message, double result) {
    cout << message << result << endl;
}

int main() {
    double triangleSide = ReadNumber(EnterTriangleSidePrompt);
    double area = CalculateCircleAreaByTriangle(triangleSide);
    PrintResult(AreaMessage, area);

    return 0;
}