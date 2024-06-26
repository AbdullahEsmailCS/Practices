#include<iostream>
using namespace std;

bool IsGreaterThanZero(int number){
	return number > 0;
}

bool IsNegative(int number) {
	return number < 0;
}

int GetNumber() {
	int number;
	cin >> number;
	return number;
}

bool IsPositive(int number) {
	return number > 0;
}

void DisplayMessage(const string& message) {
	cout << message << endl;
}



int GetDivisor(int number) {
	int divisor=  number % 10;
	return divisor;
}

int DivideByTen(int number) {
	int division = number / 10;
	return division;
}

int ReadIntgerNumber(const string& message) {

	int number;
	bool isValid = false;

	while (!isValid) {
		DisplayMessage(message);
		number = GetNumber();
		if (IsPositive(number)) {
			isValid = true;
		}
		else {
			DisplayMessage("Error number, try again");
		}
	}

	return number;

}

int ReverseNumber(int dividend) {
	int divisor = 10;
	int remainder, dividend2 = 0;

	while (dividend > 0) {
		remainder = dividend % divisor;
		dividend = dividend / divisor;
		dividend2 = dividend2 * divisor + remainder;
	}

	return dividend;
}

bool IsEqual(int firstNumber, int secondNumber) {
	return firstNumber == secondNumber;
}

int CountFrequencyDigit(int number, int digit) {
	int count = 0, remainder = 0;

	while (IsGreaterThanZero(number)) {
		remainder = GetDivisor(number);
		number = DivideByTen(number);

		if (IsEqual(remainder, digit)) {
			count++;
		}

	}

	return count;


}


int main() {

	int number = ReadIntgerNumber("Enter  a positive number");
	short digit = ReadIntgerNumber("Enter a digit");
	cout << "Frequency Digit  " << CountFrequencyDigit(number, digit);

	return 0;
}