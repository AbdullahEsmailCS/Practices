#include<iostream>
#include <string>
using namespace std;

void Print(const string& text) {
	cout << text << endl;
}

enum class NumberStatus {
	Even =0,
	Odd =1
};

int ReadNumber(const string& text) {
	Print(text);
	int number;
	cin >> number;
	cin.ignore();
	return number;
}

int Mod(int firstValue, int secondValue) {
	return firstValue % secondValue;
}

bool IsEqual(int firstValue, int secondValue) {
	return firstValue == secondValue;
}

bool IsZero(int value) {
	return IsEqual(value, 0);
}

NumberStatus CheckNumberStatus(int number) {
	int remainder = Mod(number, 2);
	return (IsZero(remainder)) ? NumberStatus::Even : NumberStatus::Odd;


}

string ConvertNumberStatusToString(NumberStatus ns) {
	return (ns == NumberStatus::Even) ? "Even" : "Odd";
}


int main() {
	int number = ReadNumber("Read a number");
	NumberStatus ns = CheckNumberStatus(number);
	string numStatus = ConvertNumberStatusToString(ns);
	Print(numStatus);

	return 0;
}