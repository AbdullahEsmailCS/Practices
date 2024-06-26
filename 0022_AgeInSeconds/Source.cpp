#include<iostream>
using namespace std;

string EnterAgeAlert = "Enter Your Age";
string AgeAlert = "Your Age in Seconds is ";

const int SECONDS_PER_MINUTE = 60;
const int MINUTES_PER_HOUR = 60;
const int HOURS_PER_DAY = 24;
const int DAYS_PER_YEAR = 365;

int ReadAge(string& message) {
	cout << message << endl;
	int _age;
	cin >> _age;
	return _age;
}


long CalculateAgeInSeconds(int age) {
	long long int seconds = age * DAYS_PER_YEAR * HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE;
	return seconds;
}

void PrintAgeInSeconds(long seconds) {
	cout<<AgeAlert << seconds << endl;
}

int main() {
	int _age = ReadAge(EnterAgeAlert);
	long s = CalculateAgeInSeconds(_age);
	PrintAgeInSeconds(s);

	return 0;
}