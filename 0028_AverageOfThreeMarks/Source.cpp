#include<iostream>
using namespace std;
string EnterMarkNotificaion = "Enter a Mark";
string AverageNotification = "Average  of three marks is ";
const int NumberOfMarks = 3;
float ReadNumber(string alert) {
	cout << alert << endl;
	float _number;
	cin >> _number;
	return(float) _number;
}
struct ThreeMarks {
	int FirstMark;
	int SecondMark;
	int ThirdMark;
};
ThreeMarks ReadThreeNumbers() {
	ThreeMarks marks;
	marks.FirstMark = ReadNumber(EnterMarkNotificaion);
	marks.SecondMark = ReadNumber(EnterMarkNotificaion);
	marks.ThirdMark = ReadNumber(EnterMarkNotificaion);
	return marks;
}
int GetFirstMark(ThreeMarks  marks) {
	return marks.FirstMark;
}
int GetSecondMark(ThreeMarks  marks) {
	return marks.SecondMark;
}
int GetThirdMark(ThreeMarks  marks) {
	return marks.ThirdMark;
}
float SumOfThreeMarks(float firstMark, float secondMark, float thirdMark) {
	return firstMark + secondMark + thirdMark;
}

float GetAverageOfThreeMarks(float sum) {
	return(float)sum / NumberOfMarks;
}

void PrintAverageOfThreeMarks(float avg) {
	cout << AverageNotification << avg << endl;
}
int main() {
	ThreeMarks marks = ReadThreeNumbers();
	int sum = SumOfThreeMarks(GetFirstMark(marks), GetSecondMark(marks), GetThirdMark(marks));
	float average = GetAverageOfThreeMarks(sum);
	PrintAverageOfThreeMarks(average);
	return 0;
}