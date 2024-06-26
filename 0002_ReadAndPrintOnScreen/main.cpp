#include<iostream>
#include<string>
using namespace std;

void Print(const string& name) {
	cout << name << endl;
}

string ReadName(const string& text) {
	cout << text << endl;
	string name;
	getline(cin, name);
	return name;
}


int main() {

	Print(ReadName("Enter your anme:"));

	return 0;
}