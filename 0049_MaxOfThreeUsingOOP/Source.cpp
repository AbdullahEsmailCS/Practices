#include <iostream>
#include <string>

using namespace std;

class NumberInput {
public:
    static int ReadPositiveNumber(const string& alert) {
        int number;
        do {
            cout << alert << endl;
            while (!(cin >> number)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a valid positive number." << endl;
            }
        } while (number <= 0);

        return number;
    }
};

class MaxNumberCalculator {
public:
    static int GetMaxOfTwoVariables(int firstNumber, int secondNumber) {
        return (firstNumber > secondNumber) ? firstNumber : secondNumber;
    }

    static int GetMaxOfThreeVariables(int firstNumber, int secondNumber, int thirdNumber) {
        int maxNumber = GetMaxOfTwoVariables(firstNumber, secondNumber);
        return GetMaxOfTwoVariables(maxNumber, thirdNumber);
    }
};

void PrintMaxNumber(int maxNumber) {
    cout << "The max of three numbers is " << maxNumber << endl;
}

int main() {
    int firstNumber = NumberInput::ReadPositiveNumber("Enter the first positive number:");
    int secondNumber = NumberInput::ReadPositiveNumber("Enter the second positive number:");
    int thirdNumber = NumberInput::ReadPositiveNumber("Enter the third positive number:");

    int maxNumber = MaxNumberCalculator::GetMaxOfThreeVariables(firstNumber, secondNumber, thirdNumber);
    PrintMaxNumber(maxNumber);

    return 0;
}