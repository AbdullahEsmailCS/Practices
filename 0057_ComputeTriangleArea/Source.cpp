#include <iostream>
#include <string>

using namespace std;

const string EnterBaseLengthPrompt = "Enter the base length of the triangle: ";
const string EnterHeightPrompt = "Enter the height of the triangle: ";
const string AreaMessage = "The area of the triangle is: ";

constexpr double TriangleAreaCoefficient = 0.5;

double ReadNumber(const string& prompt) {
    double number;
    do {
        cout << prompt;
        cin >> number;
    } while (number <= 0);
    return number;
}

double CalculateTriangleArea(double baseLength, double height) {
    return TriangleAreaCoefficient * baseLength * height;
}

int main() {
    double baseLength, height;

    baseLength = ReadNumber(EnterBaseLengthPrompt);
    height = ReadNumber(EnterHeightPrompt);

    double area = CalculateTriangleArea(baseLength, height);

    cout << AreaMessage << area << endl;

    return 0;
}