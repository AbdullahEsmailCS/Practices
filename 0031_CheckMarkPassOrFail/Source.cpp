
#include<iostream>
#include<string>
using namespace std;

string EnterMarkNotification = "Enter the mark pleaase: ";
string ResultNotification = " The student is ";
int MaxAllowedMark = 100;
int MinimumAllowedMark = 50;

enum TestResult {
	Pass =0,
	Fail =1
};

float ReadMark(string alert) {
	cout << alert << endl;
	int _number;
	cin >> _number;
	return _number;
}

TestResult CheckMark(float mark) {
	if (mark > MinimumAllowedMark)
		return TestResult::Pass;
	else
		return TestResult::Fail;
}

string GetTestResultString(TestResult testResult) {
	if (testResult == TestResult::Pass)
		return "Pass";
	else
		return "Fail";
}

void PrintResult(string result) {
	cout << ResultNotification << result << endl;
}

int main() {

	float mark = ReadMark(EnterMarkNotification);
	string ResultString = GetTestResultString(CheckMark(mark));
	PrintResult(ResultString);
	return 0;
}