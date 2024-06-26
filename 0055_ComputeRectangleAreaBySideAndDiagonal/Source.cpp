#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string EnterSideLengthPrompt = "Enter the length of one side of the rectangle: ";
string EnterDiagonalLengthPrompt = "Enter the length of the diagonal of the rectangle: ";
string AreaMessage = "The area of the rectangle is: ";

double ReadNumber(const string& prompt) {
    double number;
    do {
        cout << prompt;
        cin >> number;
    } while (number <= 0);
    return number;
}

double CalculateRectangleArea(double sideLength, double diagonalLength) {
    double height = sqrt(pow(diagonalLength, 2) - pow(sideLength, 2));
    return sideLength * height;
}

int main() {
    double sideLength, diagonalLength;

    sideLength = ReadNumber(EnterSideLengthPrompt);
    diagonalLength = ReadNumber(EnterDiagonalLengthPrompt);

    double area = CalculateRectangleArea(sideLength, diagonalLength);

    cout << AreaMessage << area << endl;

    return 0;
}