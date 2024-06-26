#include<iostream>
#include<string>
using namespace std;
const string EnterYourNameMessage = "Enter your name please ";

string ReadName(const string& alert) {
	cout << alert << endl;
	string _name;
	getline(cin, _name);
	return _name;
}


void PrintName(const string& name) {
	cout << name << endl;
}

int main() {

	PrintName(ReadName(EnterYourNameMessage));

	return 0;
}