#include<iostream>
using namespace std;

string EnterNumberAlert = "Enter a Number ";
string NumberStateAlert = "The Number is a ";

enum NumberState {
	Positive = 0,
	Negative = 1
};



bool IsGreaterThan(int first, int second) {
	return (first > second) ;
}

bool IsPositive(int number) {
	bool isGreater = IsGreaterThan(number, 0);
}


NumberState GetNumberState(int number) {
	if (IsPositive(number)) {
		return NumberState::Positive;
	}
	else {
		return NumberState::Negative;
	}
}


string GetNumberStateString(NumberState ns) {

	if (ns == NumberState::Positive)
		return "Positive Number";
	else
		return "Negative Number";
}


int ReadNumber(string& message) {
	cout << message << endl;
	int _number;
	cin >> _number;
	return _number;
}

void PrintNumberState(string state) {
	cout<<NumberStateAlert << state << endl;
}


int main() {

	int number = ReadNumber(EnterNumberAlert);
	NumberState ns = GetNumberState(number);
	string state = GetNumberStateString(ns);
	PrintNumberState(state);

	return 0;
}