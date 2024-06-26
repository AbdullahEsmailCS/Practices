#include <iostream>
#include <string>

using namespace std;

string EnterWidthPrompt = "Enter the width of the rectangle: ";
string EnterHeightPrompt = "Enter the height of the rectangle: ";
string AreaMessage = "The area of the rectangle is: ";

int ReadNumber(const string& prompt) {
    int number;
    do {
        cout << prompt;
        cin >> number;
    } while (number <= 0);
    return number;
}

int CalculateRectangleArea(int width, int height) {
    return width * height;
}

int main() {
    int width, height;

    width = ReadNumber(EnterWidthPrompt);
    height = ReadNumber(EnterHeightPrompt);

    int area = CalculateRectangleArea(width, height);

    cout << AreaMessage << area << endl;

    return 0;
}