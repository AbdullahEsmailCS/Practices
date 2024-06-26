#include<iostream>
using namespace std;

string EnterNumberAlert = "Enter a Number ";
string NumberAlert = "Number is : ";
string SubAlert = "Subtraction is: ";


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

float GetSubtract(float firstNumber, float secondNumber) {

	float sub = firstNumber - secondNumber;
	return(float)sub;
}

float Sub(TwoNumber tn) {
	float subtraction = GetSubtract(tn.FirstNumber, tn.SecondNumber);
	return (float)subtraction;
}

void PrintSubOfTwo(float sub{
	cout << SubAlert << sub<< endl;
}

int main() {
	TwoNumber tn = ReadTwoNumber();
	PrintTwoNumbersFromStruct(tn);
	float sub = Sub(tn);
	PrintSubOfTwo(sub);

	return 0;
}