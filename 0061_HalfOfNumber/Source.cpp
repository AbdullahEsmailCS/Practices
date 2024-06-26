
#include<iostream>
#include<string>
using namespace std;

string ReadNumberNotificaton = "Enter a number to divide it into halves:  ";
string HalfOfNumberNotification = "Half Of Number";
const int Divisor = 2;

int ReadNumber(string alert) {
	cout << alert << endl;
	int _number;
	cin>>_number;
	return _number;
}
float DivideNumberByTwo(int number) {
	return (float)number / Divisor;
}
string ConvertNumberToString(int number) {
	return std::to_string(number);
}
string ConstructMessageNotification(int number, int result) {
	string text = HalfOfNumberNotification + " " + ConvertNumberToString(number) + " is " + ConvertNumberToString(result);
	return text;
}
void PrintResult(string result) {
	cout << result << endl;
}
 
int main() {

	int number = ReadNumber(ReadNumberNotificaton);
	int result = DivideNumberByTwo(number);
	string notification = ConstructMessageNotification(number, result);
	PrintResult(notification);
	return 0;
}