#include<iostream>
using namespace std;

string EnterNumberAlert = "Enter a Number ";
string NumberAlert = "Number is : ";


int ReadNumberFromUser(string& message) {
	cout << message << endl;
	int _number;
	cin >> _number;
	return _number;
}

void PrintNumberOnScreen(int number) {
	cout << NumberAlert << number << endl;
}


struct TwoNumber {
	int FirstNumber;
	int SecondNumber;
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


int main() {
	TwoNumber tn = ReadTwoNumber();
	PrintTwoNumbersFromStruct(tn);

	return 0;
}