#include<iostream>
#include<string>
using namespace std;

string ReadName(string alert) {
	cout << alert << endl;
	string _name;
	getline(cin, _name);
	return _name;
}

void PrintName(string name) {
	cout << "Your name is: " << name << endl;
}

int main() {


	PrintName(ReadName("Enter your name:"));


	return 0;
}