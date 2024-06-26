#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const string EnterTriangleSidePrompt = "Please enter Triangle Side ";
const string EnterTriangleBasePrompt = "Please enter Triangle base ";
const string TriangleSideVariables[] = { "A", "B", "C" };
const float PI = 3.141592653589793238;

float ReadNumber(const string& prompt) {
    float number;
    do {
        cout << prompt;
        cin >> number;
        if (number <= 0) {
            cout << "Invalid input. Please enter a positive value." << endl;
        }
    } while (number <= 0);
    return number;
}

void ReadTriangleData(float& A, float& B, float& C) {
    for (int i = 0; i < 3; ++i) {
        string prompt = EnterTriangleSidePrompt + TriangleSideVariables[i] + ": ";
        if (i == 1) {
            prompt = EnterTriangleBasePrompt + TriangleSideVariables[i] + ": ";
        }
        float value = ReadNumber(prompt);
        if (i == 0) {
            A = value;
        }
        else if (i == 1) {
            B = value;
        }
        else if (i == 2) {
            C = value;
        }
    }
}

float CalculateTriangleArea(float A, float B, float C) {
    float P = (A + B + C) / 2;
    float Area = sqrt(P * (P - A) * (P - B) * (P - C));
    return Area;
}

float CalculateCircleRadius(float triangleArea) {
    return triangleArea / (sqrt(3) * 2);
}

float CalculateCircleArea(float radius) {
    return PI * pow(radius, 2);
}

void PrintResult(const string& variableName, float value) {
    cout << variableName << " = " << value << endl;
}

int main() {
    float A, B, C;
    ReadTriangleData(A, B, C);

    float triangleArea = CalculateTriangleArea(A, B, C);
    PrintResult("Triangle Area", triangleArea);

    float circleRadius = CalculateCircleRadius(triangleArea);
    PrintResult("Circle Radius", circleRadius);

    float circleArea = CalculateCircleArea(circleRadius);
    PrintResult("Circle Area", circleArea);

    return 0;
}