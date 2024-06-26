#include<iostream>
using namespace std;

string EnterANumberNotification = "Enter a positive Number number";
string MinNotification = "The Min number is ";

int ReadPositiveNumber(string alert) {
	cout << alert << endl;
	int _number;
	do {
		cin >> _number;

	} while (_number <= 0);

	return _number;
}


void ReadTwoNumbers(int& firstNumber, int& secondNumber) {
	firstNumber = ReadPositiveNumber(EnterANumberNotification);
	secondNumber = ReadPositiveNumber(EnterANumberNotification);
}

int Min(int number1, int number2) {
	return (number1 < number2) ? number1 : number2;
}

int GetMinOfTwoVariable(int firstNumber, int secondNumber) {
	return Min(firstNumber, secondNumber);
}

void PrintMinNumber(int MinNumber) {
	cout << MinNotification << MinNumber << endl;
}


int main() {

	int _firstNumber, _secondNumber;
	ReadTwoNumbers(_firstNumber, _secondNumber);
	PrintMinNumber(GetMinOfTwoVariable(_firstNumber, _secondNumber));

	return 0;
}