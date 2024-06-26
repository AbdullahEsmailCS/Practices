#include<iostream>
using namespace std;



// constant variables
string EnterNumberAlert = "Enter a Number ";
string TheNumberAlert = "The Number is: ";
string OddStringAlert = "Number is Odd";
string EvenStringAlert = "Number is Even";
const int EvenFactor = 2;

// Status of number
enum NumberStatus {
	Even = 0,
	Odd = 1
};

// General Function to print a text
void Print(string& alert) {
	cout << alert << " ";
}

// General Function to print a number
void Print(int number) {
	cout << number << endl;;
}
void PrintNumber(int number) {
	Print(number);
}
void PrintNumber(string alert, int number) {
	Print(alert);
	Print(number);
}


// Reading Function to read an integer
int ReadNumber(string& message) {
	Print(message);
	int _number;
	cin >> _number;
	return _number;
}


bool IsZero(int number) {
	return number == 0;
}


int GetRemainder(int firstNumber, int secondNumber) {
	float remainder = firstNumber % secondNumber;
	return remainder;
}


NumberStatus CheckNumberStatus(int number) {
	int result = GetRemainder(number, EvenFactor);
	if (IsZero(result))
		return NumberStatus::Even;
	else
		return NumberStatus::Odd;
}

string GetNumberStatusAsString(NumberStatus ns) {
	if (ns == NumberStatus::Even)
		return EvenStringAlert;
	else
		return OddStringAlert;
}

void PrintNumberStatus(string status) {
	Print(status);
}


int main() {
	int _number = ReadNumber(EnterNumberAlert);
	NumberStatus ns = CheckNumberStatus(_number);
	PrintNumber(TheNumberAlert, _number);
	string status = GetNumberStatusAsString(ns);
	PrintNumberStatus(status);

	

	return 0;
}