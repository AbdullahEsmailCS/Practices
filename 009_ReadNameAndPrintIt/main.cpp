#include<iostream>
#include <string>
using namespace std;

void Print(const string& text) {
	cout << text << endl;
}

void PrintName(const string& name) {
	Print(name);
}

string ReadName(const string& text) {
	Print(text);
	string _name;
	getline(cin, _name);
	return _name;
}

int main() {

	string name = ReadName("Enter your name: ");
	PrintName(name);

	return 0;
}