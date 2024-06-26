
#include<iostream>
#include<string>
using namespace std;

string FirstNameNotification = "Enter your first name:  ";
string LastNameNotification = "Enter your last name: ";
string FullNameNotification = "Your Full Name is: ";
 
string ReadName(string alert) {
	cout << alert << endl;
	string _name;
	getline(cin, _name);
	return _name;
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

string GetFullName(PersonInfo person, bool IsReversed = 1) {

	if (IsReversed)
		return GetLastName(person) + " " + GetFirstName(person);
	else
		return GetFirstName(person)+" " + GetLastName(person);
}

void PrintFullName(string fullName) {
	cout << FullNameNotification << fullName << endl;
 }
 

int main() {
	 
	PrintFullName(GetFullName(ReadPersonInfo(), false));
	return 0;
}