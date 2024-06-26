#include<iostream>
using namespace std;

string EnterTheScoreAlert = "Enter The Score of Student ";
string TestResultAlert = "The Student is ";
const int MinimumAllowedMark = 50;


enum TestResult {
	Pass = 1,
	Fail = 2
};


void DisplayAlert(string& alert) {
	cout << alert << endl;
}


bool IsGreaterThan(float firstNumber, float secondNumber) {
	return firstNumber > secondNumber;
}

float ReadScore(string& message) {
	DisplayAlert(message);
	float _score;
	cin >> _score;
	return (float)_score;
}

TestResult CheckScore(float score) {

	if (IsGreaterThan(score, MinimumAllowedMark)) {
		return TestResult::Pass;
	}
	else {
		return TestResult::Fail;
	}
}

string GetTestResultAsString(TestResult tr) {

	if (tr == TestResult::Pass) {
		return "Pass";
	}
	else {
		return "Fail";
	}
}

void PrintTestResult(string status) {
	DisplayAlert(status);
}

int main() {
	float _score = ReadScore(EnterTheScoreAlert);
	TestResult tr = CheckScore(_score);
	string testStatus = GetTestResultAsString(tr);
	PrintTestResult(testStatus);

	return 0;
}