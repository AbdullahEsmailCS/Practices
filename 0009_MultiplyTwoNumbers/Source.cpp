#include<iostream>
using namespace std;

string EnterNumberAlert = "Enter a Number ";
string NumberAlert = "Number is : ";
string MultiplicationAlert = "Multiplication is: ";


float ReadNumberFromUser(string& message) {
	cout << message << endl;
	float _number;
	cin >> _number;
	return (float)_number;
}

void PrintNumberOnScreen(int number) {
	cout << NumberAlert << number << endl;
}


struct TwoNumber {
	float FirstNumber;
	float SecondNumber;
};

TwoNumber ReadTwoNumber() {
	TwoNumber tn;
	tn.FirstNumber = ReadNumberFromUser(EnterNumberAlert);
	tn.SecondNumber = ReadNumberFromUser(EnterNumberAlert);
	return tn;
}

void PrintTwoNumbersFromStruct(TwoNumber tn) {
	PrintNumberOnScreen(tn.FirstNumber);
	PrintNumberOnScreen(tn.SecondNumber);
}

float GetMultiply(float firstNumber, float secondNumber) {

	float mul = firstNumber * secondNumber;
	return(float)mul;
}

float Multiply(TwoNumber tn) {
	float mul = GetMultiply(tn.FirstNumber, tn.SecondNumber);
	return (float)mul;
}

void PrintMultiplicationOfTwo(float mul) {
	cout << MultiplicationAlert << mul << endl;
}

int main() {
	TwoNumber tn = ReadTwoNumber();
	PrintTwoNumbersFromStruct(tn);
	float mul = Multiply(tn);
	PrintMultiplicationOfTwo(mul);

	return 0;
}