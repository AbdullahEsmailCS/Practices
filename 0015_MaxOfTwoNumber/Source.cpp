#include<iostream>
using namespace std;

string EnterTheNumberAlert = "Enter a Number ";
string MaxAlert = "Max of The Two Numbers is: ";

struct TwoNumbers {
	int FirstNumber;
	int SecondNumber;
};


bool IsGreaterThan(int firstNumber, int secondNumber) {
	return firstNumber > secondNumber;
}

int GetMax(int firstNumber, int secondNumber) {
	if (IsGreaterThan(firstNumber, secondNumber))
		return firstNumber;
	else
		return secondNumber;
}

int ReadNumber(string message) {
	cout << message << endl;
	int _number;
	cin >> _number;
	return _number;
}


TwoNumbers ReadTwoNumbers() {
	TwoNumbers tn;
	tn.FirstNumber = ReadNumber(EnterTheNumberAlert);
	tn.SecondNumber = ReadNumber(EnterTheNumberAlert);
	return tn;
}

int Max(TwoNumbers tn) {
	int max = GetMax(tn.FirstNumber, tn.SecondNumber);
	return max;
}


void PrintMax(int max) {
	cout << MaxAlert << max << endl;
}


int main() {
	TwoNumbers tn = ReadTwoNumbers();
	int max = Max(tn);
	PrintMax(max);


	return 0;
}