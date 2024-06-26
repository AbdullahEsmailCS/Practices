#include<iostream>
using namespace std;
struct TwoNumberStructure {
	int FirstNumber;
	int SecondNumber;
};

string InputAlert[] = { "Enter FirstNumber: ","Enter second  Number: " };
void PrintTextOnScreen(string& message) {
	cout << message << endl;
}
void PrintNumberOnScreen(int number, string title) {
	cout << title << " :" << number << endl;
}

int ReadNumber(string& message) {
	PrintTextOnScreen(message);
	int _number;
	cin >> _number;
	return _number;
}

TwoNumberStructure ReadTwoNumberFromUser() {
	TwoNumberStructure t;
	t.FirstNumber = ReadNumber(InputAlert[0]);
	t.SecondNumber = ReadNumber(InputAlert[1]);
	return t;
}
int Add(int firstNumber, int secondNumber) {
	return firstNumber + secondNumber;
}
int AddTwo(int firstNumber, int secondNumber) {
	return Add(firstNumber, secondNumber);
}
int AddTwoNumber(TwoNumberStructure t) {
	return AddTwo(t.FirstNumber, t.SecondNumber);
}

void PrintSumOfTwoNumbersOnScreen(int sum) {
	PrintNumberOnScreen(sum, "Summation is ");
}



int main() {

	PrintSumOfTwoNumbersOnScreen(AddTwoNumber(ReadTwoNumberFromUser()));

	return 0;
}