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

bool IsPrime(int number) {
	if (number <= 1) {
		return false;
	}


	int M = number / 2;
	for (int i = 2; i < M; i++) {
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}

int CalculateSumOfPrimeNumbersInArray() {
	int sum = 0;
	for (int i = 0; i < SizeOfArray; i++) {
		if (IsPrime(Items[i])) {
			sum += Items[i];
		}
	}
	return sum;
}

void PrintSumOfPrimeNumbersInArray(int sum) {
	cout << "\nSumation of Prime numbers in the array is: " << sum << endl;
}




int main() {
	ReadItemsToArray();
	PrintItemsOfArray();
	PrintSumOfPrimeNumbersInArray(CalculateSumOfPrimeNumbersInArray());
	return 0;
}