#include<iostream>
using namespace std;

string EnterANumberNotification = "Enter a positive Number number";
string MaxNotification = "The max number is ";

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

int Max(int number1, int number2) {
	return (number1 > number2) ? number1 : number2;
}

int GetMaxOfTwoVariable(int firstNumber, int secondNumber) {
	return Max(firstNumber, secondNumber);
}


void PrintMaxNumber(int maxNumber) {
	cout << MaxNotification << maxNumber << endl;
}


int main() {
	
	int _firstNumber, _secondNumber;
	ReadTwoNumbers(_firstNumber, _secondNumber);
	PrintMaxNumber(GetMaxOfTwoVariable(_firstNumber, _secondNumber));

	return 0;
}