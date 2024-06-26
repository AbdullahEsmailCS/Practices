#include<iostream>
#include<string>
using namespace std;

const int SizeOfArray = 4;
int Scores[SizeOfArray];

void PrintText(string& text) {
	cout << text << endl;
}
int ReadNumber(string message) {
	PrintText(message);
	int _input;
	cin >> _input;
	cin.ignore();
	return _input;
}

void ReadScoresFromUser() {

	for (int i = 0; i < SizeOfArray; i++) {

		Scores[i] = ReadNumber("Enter  a Number");
	}
}




int main() {

	ReadScoresFromUser();

	return 0;
}