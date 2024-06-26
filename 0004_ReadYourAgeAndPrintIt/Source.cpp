#include<iostream>
#include<string>
using namespace std;

void Print(const string& message) {
	cout << message << endl;
}
void Print(int number,const string &title) {
	cout <<title << number << endl;
}
string Print(string &message, string &title) {
	return  title + " " + message;
}

int ReadNumber(const string& message) {
	Print(message);
	int _number;
	cin >> _number;
	return _number;
}
int ReadAge(const string& message = "Enter Your Age Please: ") {
	return ReadNumber(message);
}
void PrintAge(int age, const string& ageAlert = "Your Age is: ") {
	Print(age, ageAlert);
}
int main() {
	PrintAge(ReadAge());
	return 0;
}