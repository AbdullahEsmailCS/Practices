#include<iostream>
using namespace std;

 short ReadShortNumberDataTypeFromUser(string message) {
	cout << message << endl;
	unsigned short _shortNumber;
	cin >> _shortNumber;
	return _shortNumber;
}

void DisplayShortNumberDataType(short number) {
	cout << "Age is :" << number << endl;
}

int main() {
	unsigned short _age = ReadShortNumberDataTypeFromUser("Enter your age");
	DisplayShortNumberDataType(_age);

	return 0;
}