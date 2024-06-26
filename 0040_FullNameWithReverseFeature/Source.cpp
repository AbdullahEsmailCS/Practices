
#include<iostream>
#include<string>
using namespace std;

string FirstNameNotification = "Enter your first name:  ";
string LastNameNotification = "Enter your last name: ";
string FullNameNotification = "Your Full Name is: ";
string ReverseChoiceNotification = "Enter [1] for Reverse the first and last name or [0] for no ";

string ReadName(string alert) {
	cout << alert << endl;
	string _name;
	getline(cin, _name);
	return _name;
}

bool ReadYourChoice(string alert) {
	cout << alert << endl;
	bool choice;
	cin >> choice;
	return choice;
}

struct PersonInfo {
	string FirstName;
	string LastName;
};

PersonInfo ReadPersonInfo() {
	PersonInfo info;
	info.FirstName = ReadName(FirstNameNotification);
	info.LastName = ReadName(LastNameNotification);
	return info;
}

string GetFirstName(PersonInfo personInfo) {
	return personInfo.FirstName;
}

string GetLastName(PersonInfo personInfo) {
	return personInfo.LastName;
}

string GetFullName(PersonInfo person, bool IsReversed = 0) {

	if (IsReversed)
		return GetLastName(person) + " " + GetFirstName(person);
	else
		return GetFirstName(person) + " " + GetLastName(person);
}

void PrintFullName(string fullName) {
	cout << FullNameNotification << fullName << endl;
}


int main() {

	do {
		PersonInfo info = ReadPersonInfo();
		bool choice = ReadYourChoice(ReverseChoiceNotification);
		string FullName = GetFullName(info, choice);
		PrintFullName(FullName);

	} while (true);
	return 0;
}