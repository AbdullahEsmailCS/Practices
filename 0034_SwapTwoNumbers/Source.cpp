#include <iostream>
#include <string>

using namespace std;

string EnterNumberPrompt = "Enter a positive number: ";
string BeforeSwappingMessage = "Before swapping: ";
string AfterSwappingMessage = "After swapping: ";
string Variable1Label = "Variable 1 = ";
string Variable2Label = "Variable 2 = ";

int ReadNumber(const string& prompt) {
    int number;
    do {
        cout << prompt;
        cin >> number;
    } while (number <= 0);
    return number;
}

void ReadTwoNumbers(int& firstNumber, int& secondNumber) {
    firstNumber = ReadNumber(EnterNumberPrompt);
    secondNumber = ReadNumber(EnterNumberPrompt);
}

void SwapVariables(int& var1, int& var2) {
    int temp = var1;
    var1 = var2;
    var2 = temp;
}

int main() {
    int variable1, variable2;

    ReadTwoNumbers(variable1, variable2);

    cout << BeforeSwappingMessage << Variable1Label << variable1 << ", " << Variable2Label << variable2 << endl;

    SwapVariables(variable1, variable2);

    cout << AfterSwappingMessage << Variable1Label << variable1 << ", " << Variable2Label << variable2 << endl;

    return 0;
}