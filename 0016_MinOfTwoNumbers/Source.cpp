#include<iostream>
using namespace std;
string EnterTheNumberAlert = "Enter a Number ";
string MinAlert = "Min of The Two Numbers is: ";
struct TwoNumbers {
	int FirstNumber;
	int SecondNumber;
};
bool IsLessThan(int firstNumber, int secondNumber) {
	return firstNumber < secondNumber;
}
int GetMin(int firstNumber, int secondNumber) {
	if (IsLessThan(firstNumber, secondNumber))
		return firstNumber;
	else
		return secondNumber;
}
int ReadNumber(string message) {
	cout << message << endl;
	int _number;
	cin >> _number;
	return _number;
}
TwoNumbers ReadTwoNumbers() {
	TwoNumbers tn;
	tn.FirstNumber = ReadNumber(EnterTheNumberAlert);
	tn.SecondNumber = ReadNumber(EnterTheNumberAlert);
	return tn;
}
int Min(TwoNumbers tn) {
	int max = GetMin(tn.FirstNumber, tn.SecondNumber);
	return max;
}
void PrintMin(int min) {	
	cout << MinAlert << min << endl;
}
int main() {
	TwoNumbers tn = ReadTwoNumbers();
	int min = Min(tn);
	PrintMin(min);
	return 0;
}