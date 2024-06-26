#include<iostream>
using namespace std;

int ReadNumber(const string& text) {
	cout << text << endl;
	int number;
	cin >> number;
	cin.ignore();
	return number;
}

void PrintNumber(int number) {
	cout << "Number is :" << number << endl;
}


int main() {

	PrintNumber(ReadNumber("Read a nUmber"));

	return 0;
}