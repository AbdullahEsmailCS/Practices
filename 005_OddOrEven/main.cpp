#include<iostream>
#include<string>


/*
write a program to check if a number is odd or even
*/
using namespace std;


void Print(const string& message) {
	cout << message << endl;
}

int ReadNumber(const string& message) {
	Print(message);
	int number;
	cin >> number;
	cin.ignore();
	return number;
}

int Add(int firstValue, int secondValue) {
	return firstValue + secondValue;
}
int Subtract(int firstValue, int secondValue) {
	return firstValue - secondValue;
}
int Multiply(int firstValue, int secondValue) {
	return firstValue * secondValue;
}
int Divide(int firstValue, int secondValue) {
	if (secondValue == 0) {
		return -1;
	}
	return firstValue / secondValue;
}

int Mod(int firstValue, int secondValue) {
	return firstValue % secondValue;
}

bool IsEqual(int firstValue, int secondValue) {
	return firstValue == secondValue;
}
bool IsNotEqual(int firstValue, int secondValue) {
	return firstValue != secondValue;
}
bool IsGreater(int firstValue, int secondValue) {
	return firstValue > secondValue;
}
bool IsLess(int firstValue, int secondValue) {
	return firstValue < secondValue;
}
bool IsGreaterOrEqual(int firstValue, int secondValue) {
	return firstValue >= secondValue;
}
bool IsLessOrEqual(int firstValue, int secondValue) {
	return firstValue <= secondValue;
}

bool And(bool value1, bool value2) {
	return value1 && value2;
}

bool Or(bool value1, bool value2) {
	return value1 || value2;
}
bool Not(bool value1) {
	return !value1;
}


bool IsDivisable(int firstValue, int secondValue) {
	int result = Mod(firstValue, secondValue);
	bool isZero = IsEqual(result, 0);
	return  isZero;
}
enum class OddEvenState {
	Even = 0,
	Odd = 1
};

bool IsDivisibleByTwo(int number) {
	bool isDivisbleByTwo = IsDivisable(number, 2);
	return  isDivisbleByTwo;
}

OddEvenState CheckNumberState(int number) {
	return (IsDivisibleByTwo(number) ? OddEvenState::Even : OddEvenState::Odd);
}

string CastOddEvenStateToString(OddEvenState state) {
	switch (state)
	{
	case OddEvenState::Odd:
		return "Odd";
		break;
	case OddEvenState::Even:
		return "Even";
		break;
	default:
		return "Unkown";
		break;
	}
}

int main() {

	int number = ReadNumber("Enter the number");
	OddEvenState status = CheckNumberState(number);
	Print(CastOddEvenStateToString(status));


	return 0;
}