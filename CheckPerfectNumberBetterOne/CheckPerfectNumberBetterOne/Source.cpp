#include<iostream>
#include<cmath>
using namespace std;











int ReadPositiveNumber(string message) {

	int number = 0;
	do {
		cout << message << endl;
		cin >> number;

	} while (number <= 0);

	return number;
}



bool IsDivisor(int number, int divisor) {
	return number % divisor == 0;
}

bool CheckPerfectNumber(int sum, int number) {
	return sum == number;
}

int CalculateSumOfDivisors(int number) {

	int sum = 0;
	for (int i = 1; i <= number; i++) {
		if (IsDivisor(number, i))
			sum += i;
	}

	return sum;

}


bool IsPerfectNumber(int number) {
	int sum = CalculateSumOfDivisors(number);
	bool IsPerfect = CheckPerfectNumber(sum, number);
	return IsPerfect;
}


void PrintPerfectNumberFrom1ToN(int number) {

	for (int i = 1; i < number; i++) {
		if (IsPerfectNumber(i)) {
			cout << i << endl;
		}
	}

}


int main() {


	//perfect number equal to the sum of all divisors == number == sum of dvisorst
	PrintPerfectNumberFrom1ToN(ReadPositiveNumber("Please Enter a positive number"));

	return 0;
}