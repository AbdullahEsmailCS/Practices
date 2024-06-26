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

	return sum;


}


void PrintResult(int number) {
	if (IsPerfectNumber(number))
		cout << "it is perfect number";
	else
		cout << "it is not perfect number";
}



int main() {
	PrintResult(ReadPositiveNumber("Please Enter a positive number"));



	return 0;
}