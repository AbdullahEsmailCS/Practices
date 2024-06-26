#include<iostream>
using namespace std;

string EnterANumberNotification = "Enter a positive Number number";
string MaxNotification = "The max of three number is ";

int ReadPositiveNumber(string alert) {
	cout << alert << endl;
	int _number;
	do {
		cin >> _number;

	} while (_number <= 0);

	return _number;
}


void ReadThreeNumbers(int& firstNumber, int& secondNumber, int& thirdNumber) {
	firstNumber = ReadPositiveNumber(EnterANumberNotification);
	secondNumber = ReadPositiveNumber(EnterANumberNotification);
	thirdNumber = ReadPositiveNumber(EnterANumberNotification);
}

int Max(int number1, int number2) {
	return (number1 > number2) ? number1 : number2;
}

int GetMaxOfTwoVariable(int firstNumber, int secondNumber, int thirdNumber) {
	
	int  _maxNumber = firstNumber;
	if (secondNumber > _maxNumber) {
		_maxNumber = secondNumber;
	}
	
	if (thirdNumber > _maxNumber) {
		_maxNumber = thirdNumber;
	}

	return _maxNumber;

}


void PrintMaxNumber(int maxNumber) {
	cout << MaxNotification << maxNumber << endl;
}


int main() {

	int _firstNumber, _secondNumber,_thirdNumber;
	ReadThreeNumbers(_firstNumber, _secondNumber,_thirdNumber);
	PrintMaxNumber(GetMaxOfTwoVariable(_firstNumber, _secondNumber, _thirdNumber));

	return 0;
}