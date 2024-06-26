#include<iostream>
#include<string>
using namespace std;

void Print(string message) {
	cout << message << endl;
}
void Print(string message, string title) {
	cout<<title << message << endl;
}
void Print(int age, string title) {
	cout << title << age << endl;
}

void PrintAge(int age, string title) {
	Print(age, title);
}

string ReadName(string message) {
	Print(message);
	string _name;
	getline(cin, _name);
	return _name;
}

int ReadAge(string message) {
	Print(message);
	int _age;
	cin >> _age;
	cin.ignore();

	return _age;
}

void PrintName(string name,string title) {
	Print(name, title);
}

int main() {

	string name = ReadName("Enter your name");
	int age = ReadAge("Enter your age");
	PrintName(name,"Name is: ");
	PrintAge(age,"Age is:");
	
	return 0;
}