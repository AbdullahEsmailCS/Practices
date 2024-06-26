#include<iostream>
using namespace std;

char ReadCharacter(string message) {
	cout << message << endl;
	char _input;
	cin >> _input;
	return _input;
}

void PrintCharacter(char character) {
	cout << character << endl;
}

int main() {

	char letter = ReadCharacter("enter a character only one letter");
	PrintCharacter(letter);


	return 0;
}