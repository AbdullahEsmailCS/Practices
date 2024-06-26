#include<iostream>
using namespace std;

int ReadPositiveNumber(string message) {

	int number = 0;
	do {
		cout << message << endl;
		cin >> number;

	} while (number <= 0);

	return number;
}


bool IsPerfectNumber(int number) {

	int sum = 0;
	for (int i = 1; i < number; i++) {
		if (number % i == 0)
			sum += i;
	}

	return sum==number;


}


void PrintPerfectNumberFrom1ToN(int number) {

	for (int i = 1; i < number; i++) {
		if (IsPerfectNumber(i)) {
			cout << i << endl;
		}
	}

}



int main() {
	PrintPerfectNumberFrom1ToN(ReadPositiveNumber("Please Enter a positive number"));



	return 0;
}