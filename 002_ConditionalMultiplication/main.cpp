#include<iostream>
#include<string>


/*
write a program to check if a number is even , then multiply it by eight , otherwise , multiply it by nine
*/
using namespace std;

const int Eight = 8;
const int Nine = 9;

void Print(const string& message) {
	cout << message << endl;
}

int ReadNumber(const string& message) {
	Print(message);
	int number;
	cin >> number;
	cin.ignore();
	return number;
}

long GetRemainder(long firstValue, long secondValue) {
	return(long)firstValue % secondValue;
}

int Multiply(int firstValue, int secondValue) {
	return firstValue * secondValue;
}

bool IsZero(int number) {
	return number == 0;
}

bool IsEven(int number) {
	const int factor = 2;
	int result = GetRemainder(number, factor);
	bool isZero = IsZero(result);
	return(isZero) ? true : false;
}

int PerformMultiplication(int number) {
	return (IsEven(number) ? Multiply(number, Eight) : Multiply(number, Nine));
}

void Print(int result) {
	cout << "Multiplication is: " << result << endl;
}

int main() {
	int number = ReadNumber("Enter a  number");
	Print(PerformMultiplication(number));
	return 0;
}