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

bool IsFirstNumberTheMax(TwoNumber t) {

	if (t.FirstNumber > t.SecondNumber) {
		return true;
	}
	else
	{
		return false;
	}

}

int GetMaxNumber(TwoNumber t) {
	int max;
	if (t.FirstNumber > t.SecondNumber) {
		max = t.FirstNumber;
	}
	else
	{
		max = t.SecondNumber;
	}

	return max;
}

void PrintMaxNumberOnly(int max) {
	cout << "\nMax is: " << max << endl;
}

void PrintTwoNumbers(TwoNumber t) {
	cout << "\nFirst Number is :  " << t.FirstNumber << endl;
	cout << "\nSecond Number is: " << t.SecondNumber << endl;
}


void PrintMaxResult(TwoNumber t) {
	if (IsFirstNumberTheMax(t)) {
		cout << "\nFirst Number:" << t.FirstNumber << " is greater than the second number " << t.SecondNumber << endl;
	}
	else {
		cout << "\nSecond Number:" << t.SecondNumber << " is greater than the First number " << t.FirstNumber << endl;
	}
}

int main() {

	TwoNumber t = ReadTwoNumbers();
	PrintTwoNumbers(t);
	PrintMaxNumberOnly(GetMaxNumber(t));
	PrintMaxResult(t);


	return 0;
}