#include<iostream>
using namespace std;


 
void DisplayMessage(const string& message) {
	cout << message << endl;
}

int GetInputNumber() {
	int number;
	cin >> number;
	return number;
}

bool IsPositiveInteger(int number) {
	return number > 0;
}

void DisplayErrorMessage() {
	cout << "Invalid number. Please enter a positive integer." << endl;
}

int ReadIntegerNumber(const string& message) {
	int number;
	bool isValidNumber = false;

	while (!isValidNumber) {
		DisplayMessage(message);
		number = GetInputNumber();

		if (IsPositiveInteger(number)) {
			isValidNumber = true;
		}
		else {
			DisplayErrorMessage();
		}
	}

	return number;
}
 

int ReverseNumber(int number) {
	int remainder = 0, number2=0;

	while (number > 0) {
		remainder = number % 10;
		number = number / 10;
		number2 = number2 * 10 + remainder;
	}

	return number2;
}

void PrintNumberInReverse(int number) {
	cout << "Number in reverse: " << number<<endl;
}



int main() {
	int number = ReadIntegerNumber("Enter a number");
	 
	PrintNumberInReverse(ReverseNumber(number));
	return 0;
}