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

	size_t totalSize = sizeof(Scores);
	size_t elementSize = sizeof(Scores[0]);
	size_t arrayLength = totalSize / elementSize;


	for (int i = 0; i < SizeOfArray; i++) {

		Scores[i] = ReadNumber("Enter  a Number");
	}
}


void PrintScoresInReverse() {
	size_t totalSize = sizeof(Scores);
	size_t elementSize = sizeof(Scores[0]);
	size_t arrayLength = totalSize / elementSize;


	for (int i = arrayLength - 1; i >= 0; i--) {

		cout << Scores[i] <<"\t";
	}
}



int main() {

	ReadScoresFromUser();
	PrintScoresInReverse();
	return 0;
}