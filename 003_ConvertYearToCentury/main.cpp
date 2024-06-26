#include<iostream>
#include<string>


/*
write a program to convert a years to century
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
int Subtract(int firstValue, int secondValue) {
	return firstValue - secondValue;
}
int Add(int firstValue, int secondValue) {
	return firstValue + secondValue;
}
int Divide(int firstValue, int secondValue) {
	return firstValue / secondValue;
}

int ConvertYearToCentury(int year) {
	int division = Divide(Subtract(year, 1), 100);
	return Add(division, 1);
}
 
void Print(int number) {
	cout << "Century: " << number << endl;
}

int main() {
	int year = ReadNumber("Enter a year ");
	int cent = 	ConvertYearToCentury(year);
	Print(cent);
	return 0;
}