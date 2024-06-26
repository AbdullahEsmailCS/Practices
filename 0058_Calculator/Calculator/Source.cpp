#include <iostream>
#include <string>
using namespace std;

enum class OperationType { ADD = '+', SUBTRACT = '-', MULTIPLY = '*', DIVIDE = '/' };

float ReadNumber(const string& message)
{
    float number = 0;
    cout << message << endl;
    cin >> number;
    return number;
}

OperationType ReadType()
{
    char input = '+';
    cout << "Please enter Operation Type (+, -, *, /): ";
    cin >> input;

    switch (input)
    {
    case '+':
        return OperationType::ADD;
    case '-':
        return OperationType::SUBTRACT;
    case '*':
        return OperationType::MULTIPLY;
    case '/':
        return OperationType::DIVIDE;
    default:
        throw runtime_error("Invalid operation type entered.");
    }
}

float Calculate(float number1, float number2, OperationType opType)
{
    switch (opType)
    {
    case OperationType::ADD:
        return number1 + number2;
    case OperationType::SUBTRACT:
        return number1 - number2;
    case OperationType::MULTIPLY:
        return number1 * number2;
    case OperationType::DIVIDE:
        return number1 / number2;
    default:
        throw runtime_error("Invalid operation type.");
    }
}

int main()
{
    float number1 = ReadNumber("Please enter the first number: ");
    float number2 = ReadNumber("Please enter the second number: ");
    OperationType opType = ReadType();

    try
    {
        float result = Calculate(number1, number2, opType);
        cout << "Result: " << result << endl;
    }
    catch (const exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}