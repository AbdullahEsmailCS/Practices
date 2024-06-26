#include<iostream>
#include<string>
using namespace std;


const string messages[] = { "Enter your name:?","Your name is: " };
void Print(const string& message, const string& title=" ") {
	cout << title << " " << message << endl;
}

string ReadName(const string& message) {
	Print(message);
	string _name;
	getline(cin, _name);
	return _name;
}

void PrintName(const string& name) {
	Print(name, messages[1]);
}


int main() {

	string name = ReadName(messages[0]);
	PrintName(name);

	return 0;
}