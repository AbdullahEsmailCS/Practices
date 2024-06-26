#include<iostream>
using namespace std;
string EnterNumberNotificaion = "Enter a number";
string PrintTotalNotification = "Total of three Number is ";

int ReadNumber(string alert) {
	cout << alert << endl;
	int _number;
	cin >> _number;
	return _number;
}
struct ThreeNumbers {
	int FirstNumber;
	int SecondNumber;
	int ThirdNumber;
};
ThreeNumbers ReadThreeNumbers() {
	ThreeNumbers nums;
	nums.FirstNumber = ReadNumber(EnterNumberNotificaion);
	nums.SecondNumber = ReadNumber(EnterNumberNotificaion);
	nums.ThirdNumber = ReadNumber(EnterNumberNotificaion);
	return nums;
}
int GetFirstNumber(ThreeNumbers numbers) {
	return numbers.FirstNumber;
}
int GetSecondNumber(ThreeNumbers numbers) {
	return numbers.SecondNumber;
}
int GetThirdNumber(ThreeNumbers numbers) {
	return numbers.ThirdNumber;
}
int SumOfThree(int firstNumber, int secondNumber, int thirdNumber) {
	return firstNumber + secondNumber + thirdNumber;
}
void PrintTotalOfThree(int total) {
	cout << PrintTotalNotification << total << endl;
}
int main() {
	ThreeNumbers nums = ReadThreeNumbers();
	int total = SumOfThree(GetFirstNumber(nums), GetSecondNumber(nums), GetThirdNumber(nums));
	PrintTotalOfThree(total);
	return 0;
}