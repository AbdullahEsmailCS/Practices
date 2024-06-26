#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const double Pi = 3.14159;
const string EnterSideLengthPrompt = "Enter the side length of the square: ";
const string AreaMessage = "The area of the circle inscribed in the square is: ";

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

double CalculateCircleAreaInscribedInSquare(double sideLength) {
    double radius = sideLength / 2.0;
    return Pi * pow(radius, 2);
}

void PrintResult(const string& message, double result) {
    cout << message << result << endl;
}

int main() {
    double sideLength = ReadNumber(EnterSideLengthPrompt);
    double area = CalculateCircleAreaInscribedInSquare(sideLength);
    PrintResult(AreaMessage, area);

    return 0;
}