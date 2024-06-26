#include<iostream>
using namespace std;

string EnterNumberAlert = "Enter a Number ";
string NumberAlert = "Number is : ";
string SumationAlert = "Summation is: ";


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

float GetSummation(float firstNumber, float secondNumber) {
	return(float) firstNumber + secondNumber;
}

float Sum(TwoNumber tn) {
	float sum =	GetSummation(tn.FirstNumber, tn.SecondNumber);
	return (float)sum;
}

void PrintSummationOfTwo(float summation) {
	cout << SumationAlert << summation << endl;
}

int main() {
	TwoNumber tn = ReadTwoNumber();
	PrintTwoNumbersFromStruct(tn);
	float sum = Sum(tn);
	PrintSummationOfTwo(sum);

	return 0;
}