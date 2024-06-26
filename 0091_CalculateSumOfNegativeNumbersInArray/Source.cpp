#include<iostream>
#include<string>
using namespace std;

const int SizeOfArray = 5;
int Items[SizeOfArray];

string EnterItemAlert = "Enter the item ";
string OutputArrayElement = "Elements of Array: ";

void Print(string& message) {
	cout << message << endl;
}
void Print(int number) {
	cout << number << ", ";
}

int ReadNumber(string message) {
	Print(message);
	int _number;
	cin >> _number;
	return _number;
}

void ReadItemsToArray() {
	for (int i = 0; i < SizeOfArray; i++) {
		cout << EnterItemAlert << i + 1 << endl;
		cin >> Items[i];
	}
}

void PrintItemsOfArray() {
	Print(OutputArrayElement);
	for (int i = 0; i < SizeOfArray; i++) {
		Print(Items[i]);
	}
}

bool Negative(int number) {
	return(number < 0);
}

int CalculateSumOfNegativeNumbersInArray() {
	int sum = 0;
	for (int i = 0; i < SizeOfArray; i++) {
		if (Negative(Items[i])) {
			sum += Items[i];
		}
	}
	return sum;
}

void PrintSumOfNegativeNumbersInArray(int sum) {
	cout << "\nSumation of Negative numbers in the array is: " << sum << endl;
}




int main() {
	ReadItemsToArray();
	PrintItemsOfArray();
	PrintSumOfNegativeNumbersInArray(CalculateSumOfNegativeNumbersInArray());
	return 0;
}