#include<iostream>
#include<string>
 
using namespace std;

const string InputAlert[] = { "Enter First Name: ", "Enter Last Name"};

void Print(const string& message) {
	cout << message << endl;
}

string ReadString(const string& message) {
	Print(message);
	string text;
	getline(cin, text);
	return text;
}

string ReadName(const string& alert) {
	return ReadString(alert);
}

struct PersonInfo {
	string FirstName;
	string LastName;
};

PersonInfo ReadRecord() {
	PersonInfo pi;
	pi.FirstName = ReadName(InputAlert[0]);
	pi.LastName = ReadName(InputAlert[1]);

	return pi;
}

string GetFullName(PersonInfo p) {
	string fullName = p.FirstName + " " + p.LastName;
	return fullName;
}

void PrintFullName(const string& fullName) {
	Print(fullName);
}


int main() {

	PersonInfo p = ReadRecord();
	PrintFullName(GetFullName(p));

	return 0;
}