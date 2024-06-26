#include<iostream>
#include<cmath>
#include<string>

using namespace std;




//---------Calculations-----------------------------------------
int CalculateSquareRoot(int number)
{
	return (int)sqrt(number);
}

//----------------------booeans check

bool IsNegative(int number) {
	return number <= 0;
}

bool IsPositive(int number) {
	return number > 0;
}

bool IsEven(int number) {
	return number % 2 == 0;
}
bool IsOdd(int number) {
	return number % 2 != 0;
}

bool IsGreaterThan(int firstNumber, int secondNumber) {
	return firstNumber > secondNumber;
}

bool IsLessThan(int firstNumber, int secondNumber) {
	return firstNumber < secondNumber;
}

bool IsGreaterThanOrEqual(int firstNumber, int secondNumber) {
	return firstNumber >= secondNumber;
}

bool IsLessThanOrEqual(int firstNumber, int secondNumber) {
	return firstNumber <= secondNumber;
}

bool IsEqual(int firstNumber, int secondNumber) {
	return firstNumber == secondNumber;
}

bool IsNotEqual(int firstNumber, int secondNumber) {
	return firstNumber != secondNumber;
}

bool IsLessThanTwo(int number)
{
	return number < 2;
}

bool IsDivisible(int number, int divisor)
{
	return number % divisor == 0;
}

bool IsNotDivisibleBy(int number, int divisor)
{
	bool isDivisable = IsDivisible(number, divisor);
	return !isDivisable;
}


bool IsBetween(int number, int minValue, int maxValue)
{
	return IsGreaterThan(number, minValue) && IsLessThan(number, maxValue);
}

bool IsZero(int number) {
	return number == 0;
}

bool IsNotZero(int number) {
	return number != 0;
}

bool IsInRange(int number, int minValue, int maxValue)
{
	return IsGreaterThanOrEqual(number, minValue) && IsLessThanOrEqual(number, maxValue);
}


bool IsDivisibleBy(int number, int divisor) {
	return number % divisor == 0;
}


bool IsPositiveEven(int number) {
	return IsGreaterThan(number, 0) && (IsEven(number));
}

bool IsPositiveOdd(int number) {
	return IsGreaterThan(number, 0) && (IsOdd(number));
}

bool IsNegativeEven(int number) {
	return IsLessThan(number, 0) && IsEven(number);
}

bool IsNegativeOdd(int number) {
	return IsLessThan(number, 0) && IsOdd(number);
}


bool HasDigit(int number, int digit) {
	return (number % 10 == digit);
}

bool HasTwoDigits(int number) {
	return IsGreaterThanOrEqual(number, 10) && IsLessThan(number, 100);
}

bool HasThreeDigits(int number) {
	return IsGreaterThanOrEqual(number, 100) && IsLessThan(number, 1000);
}

bool HasFourDigits(int number) {
	return IsGreaterThanOrEqual(number, 1000) && IsLessThan(number, 10000);
}

bool HasNDigits(int number, int N) {
	int lowerBound = pow(10, N - 1);
	int upperBound = pow(10, N);

	return IsGreaterThanOrEqual(number, lowerBound) && IsLessThan(number, upperBound);
}


bool IsLeapYear(int year) {
	bool isDivisibleBy4 = IsDivisibleBy(year, 4);
	bool isDivisibleBy100 = IsDivisibleBy(year, 100);
	bool isDivisibleBy400 = IsDivisibleBy(year, 400);

	return (isDivisibleBy4 && !isDivisibleBy100) || isDivisibleBy400;
}


bool CheckDivisors(int number)
{
	int sqrt = CalculateSquareRoot(number);

	for (int i = 2; i <= sqrt; i++)
	{
		if (IsDivisible(number, i))
			return true;
	}

	return false;
}


bool IsPrime(int number)
{
	if (IsLessThanTwo(number))
		return false;

	bool hasDivisor = CheckDivisors(number);
	return !hasDivisor;
}








int main() {


	return 0;
}