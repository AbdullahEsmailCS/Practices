#include<iostream>
using namespace std;

// write a program to check if a number is positive or negative 


enum enNumberStatus {
	Positive = 0,
	Negative  =1
};

void Print(const string& message) {
	cout << message << endl;
}

int ReadNumber(const string& message) {
	Print(message);
	int _number;
	cin >> _number;
	return _number;
}

bool IsGreater(int firstNumber,int secondNumber) {
	return (firstNumber > secondNumber);
}

bool IsPositive(int number) {
	return (IsGreater(number, 0));
}

enNumberStatus CheckIfNumberPositive(int number) {
	if (IsPositive(number)) {
		return enNumberStatus::Positive;
	}
	else {
		return enNumberStatus::Negative;
	}
}

string GetNumberStatusAsString(enNumberStatus status) {
	if (status == enNumberStatus::Positive) {
		return "Positive";
	}
	else {
		return "Negative";
	}
}

void Display(string numStatus) {
	Print(numStatus);
}

int main() {

	Display(GetNumberStatusAsString(CheckIfNumberPositive(ReadNumber("Enter a Number"))));

	return 0;
}