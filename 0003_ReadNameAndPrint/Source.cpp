#include<iostream>
#include<string>
using namespace std;

const string NameNotify = "Enter your name please: ";

void Print(const string& message);
string ReadName(const string& message);
void Print(const string& message, string  alert  ) {
	cout << alert << " " << message << endl;
}
void PrintName(const string& name, string welcoming = "Your Name is: ") {
	Print(name, welcoming);
}

int main() {
	PrintName(ReadName(NameNotify));
	return 0;
}

void Print(const string& message) {
	cout << message << endl;
}

string ReadName(const string &title ="Enter Your Name: ") {
	Print(title);
	string _name;
	getline(cin, _name);
	return _name;
}