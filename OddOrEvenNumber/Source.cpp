#include<iostream>
#include<string>
using namespace std;

string FixedMessage = "The Number is ";
string EnterNumberNotification = "Enter the Number To check please: ";

enum enNumberType {
	Even = 0,
	Odd =1
};

int ReadPositiveNumber(string alert) {
	cout << alert << endl;
	int _number;
	do {
		cin >> _number;
	} while (_number <=0);

	return _number;
}


int GetModByTwo(int number) {
	return number % 2;
}

bool IsResultZero(int result) {
	return (result == 0) ? true : false;
}

enNumberType CheckNumberType(int number) {
	int result = GetModByTwo(number);
	if (IsResultZero(result)) {
		return enNumberType::Even;
	}
	else {
		return enNumberType::Odd;
	}
}

string GetNumberAsString(enNumberType numberType) {
	if (numberType == enNumberType::Even)
		return "Even";
	else
		return "Odd";
}


void PrintNumberType(string type) {
	cout << FixedMessage << type << endl;
}

int main() {

	int number = ReadPositiveNumber(EnterNumberNotification);
	enNumberType numType = CheckNumberType(number);
	string StringNumType = GetNumberAsString(numType);
	PrintNumberType(StringNumType);

	


	return 0;
}