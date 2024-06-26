#include<iostream>
#include<string>

using namespace std;

int ReadNumber(string message) {
	cout << message << endl;
	int _number;
	cin >> _number;
	return _number;
}

struct TwoNumber {
	int FirstNumber;
	int SecondNumber;
};

TwoNumber ReadTwoNumbers() {
	TwoNumber t;
	t.FirstNumber = ReadNumber("Enter First Number");
	t.SecondNumber = ReadNumber("Enter second number");
	return t;
}

void PrintTwoNumbers(TwoNumber t) {
	cout << "First Number is: " << t.FirstNumber << endl;
	cout << "Second Number is: " << t.SecondNumber << endl;
}

int main() {

	PrintTwoNumbers(ReadTwoNumbers());

	return 0;
}