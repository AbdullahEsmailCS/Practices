#include <iostream>
#include <stdexcept>
using namespace std;
const string INPUT_ALERT[] = { "Enter First Number: ", "Enter Second Number: " };
const string OUTPUT_ALERT[] = { "Remainder of Two Numbers: ", "First Number is: ", "Second Number is: " };
const string ERROR_DIVISION_BY_ZERO = "Error: Division by zero";
struct TwoNumbersStruct {
    int firstNumber;
    int secondNumber;
};
void printTextOnScreen(const string& message) {
    cout << message << endl;
}
int readNumber(const string& message) {
    printTextOnScreen(message);
    int number;
    cin >> number;
    return number;
}

bool isZero(int number) {
    return (number == 0);
}

int calculateRemainder(int firstNumber, int secondNumber) {
    if (isZero(secondNumber)) {
        throw runtime_error(ERROR_DIVISION_BY_ZERO);
    }
    else {
        return firstNumber % secondNumber;
    }
}

TwoNumbersStruct readTwoNumbersFromUser() {
    TwoNumbersStruct numbers;
    numbers.firstNumber = readNumber(INPUT_ALERT[0]);
    numbers.secondNumber = readNumber(INPUT_ALERT[1]);
    return numbers;
}

void printValueWithTitle(int value, const string& title) {
    cout << title << value << endl;
}

void displayValuesOfNumbers(const TwoNumbersStruct& numbers) {
    printValueWithTitle(numbers.firstNumber, OUTPUT_ALERT[1]);
    printValueWithTitle(numbers.secondNumber, OUTPUT_ALERT[2]);
}

void printRemainder(int result) {
    cout << OUTPUT_ALERT[0] << result << endl;
}

int main() {
    try {
        TwoNumbersStruct numbers = readTwoNumbersFromUser();
        int remainderResult = calculateRemainder(numbers.firstNumber, numbers.secondNumber);
        displayValuesOfNumbers(numbers);
        printRemainder(remainderResult);
    }
    catch (const exception& e) {
        cout << "An error occurred: " << e.what() << endl;
    }

    return 0;
}