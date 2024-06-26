#include<iostream>
using namespace std;

string EnterNumberAlert = "Enter a number ";
string NumberAlert = "The number is :";

int ReadNumber(string& message) {
	cout << message << endl;
	int _number;
	cin >> _number;
	return _number;
}


void PrintNumberOnScreen(int number) {
	cout<<NumberAlert << number << endl;
}


int main() {
	int _number = ReadNumber(EnterNumberAlert);
	PrintNumberOnScreen(_number);

	return 0;
}