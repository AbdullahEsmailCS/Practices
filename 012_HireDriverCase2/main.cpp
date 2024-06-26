#include<iostream>
#include <string>
using namespace std;

const string InputAlerts[] = { "Enter your age: ", "Do you Have a Driver license(0 for no, 1 for yes)","Do you have a recommendation?(0,1)"};

const int AllowedAge = 21;

void Print(const string& text) {
	cout << text << endl;
}

enum class HireStatus {
	Hired = 0,
	Rejected = 1
};

int ReadNumber(const string& text) {
	Print(text);
	int number;
	cin >> number;
	cin.ignore();
	return number;
}

bool ReadBoolean(const string& text) {
	Print(text);
	bool val;
	cin >> val;
	return val;
}
int ReadAge(const string& text) {
	return ReadNumber(text);
}
bool ReadHasLicense(const string& text) {
	return ReadBoolean(text);
}

struct Driver {
	int Age;
	bool HasDriverLicnese = false;
	bool HasRecommendations = false;
};
Driver ReadDriverInformation() {
	Driver d;
	d.Age = ReadAge(InputAlerts[0]);
	d.HasDriverLicnese = ReadHasLicense(InputAlerts[1]);
	d.HasRecommendations = ReadBoolean(InputAlerts[2]);
	return d;
}

bool IsGreater(int firstValue, int secondValue) {
	return firstValue > secondValue;
}
bool IsAcceptableAge(int age) {
	return IsGreater(age, AllowedAge);
}

bool And(bool A, bool B) {
	return A && B;
}

bool IsHired(int age, bool hasLicense) {
	return And(IsAcceptableAge(age), hasLicense);
}
bool HasRecommendation(Driver d) {
	return d.HasRecommendations;
}

HireStatus CheckHireStatus(Driver d) {
	if (HasRecommendation(d)) {
		return HireStatus::Hired;
	}
	else if(IsHired(d.Age, d.HasDriverLicnese)) {
		return HireStatus::Hired;
	}
	else {
		return HireStatus::Rejected;
	}
}

void PrintHireStatus(HireStatus hs) {
	if (hs == HireStatus::Rejected) {
		Print("Rejected");
	}
	else {
		Print("Hired");
	}
}



int main() {

	Driver driver = ReadDriverInformation();
	PrintHireStatus(CheckHireStatus(driver));

	return 0;
}