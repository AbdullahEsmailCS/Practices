#include<iostream>
#include<string>

using namespace std;


enum enPrimeType {
	Prime =0,
	NotPrime =1
};

int ReadPositiveNumber(const string& message) {
	cout << message << endl;
	int _number;

	do {
		cin >> _number;
	} while (_number <= 0);

	return _number;
}


enPrimeType CheckPrimality(int number) {

	int _m = number / 2;

	for (int i = 2; i <= _m; i++) {
		if (number % i == 0)
			return enPrimeType::NotPrime;
	}

	return enPrimeType::Prime;

}


void PrintAllPrimeNumbers(int number) {
	cout << "\n\n\t\t\tPrimes number from 1 to n\n\n";

	for (int i = 1; i <= number; i++) {
		if (CheckPrimality(i) == enPrimeType::Prime) {
			cout << i << "\t";
		}
	}
}




int main() {

	int number = ReadPositiveNumber("Enter a positive number");
	PrintAllPrimeNumbers(number);

	return  0;
}