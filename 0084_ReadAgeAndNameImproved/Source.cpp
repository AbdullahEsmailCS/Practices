#include<iostream>
#include<string>
using namespace std;



struct StaticContentHelper {
	string ColonSeparator = " : ";
	string NamleNotification = "Name is";
	string AgeNotification = "Age is ";
	string EnterNameAlert = "Enter your name";
	string EnterAgeAlert = "Enter your age";

}helper;

void Print(string message) {
	cout << message << endl;
}
 

void Print(string message, string titleAlert) {
	cout << titleAlert<<helper.ColonSeparator << message << endl;
}

void Print(int age) {
	cout << age << endl;;
}
void Print(int age, string titleAlert) {
	cout << titleAlert << helper.ColonSeparator << age << endl;
}

string ReadName(string message) {
	Print(message);
	string _name;
	getline(cin, _name);
	return _name;
}

int ReadAge(string message) {
	cout << message << endl;
	int _age;
	cin >> _age;
	cin.ignore();
	return _age;
}
void PrintName(string name){
	Print(name);
}
void PrintName(string name, string titleAlert) {
	Print(name, titleAlert);
}
void PrintAge(int age) {
	Print(age);
}

void PrintAge(int age, string titleAlert) {
	Print(age, titleAlert);
}


int main() {
	string Name = ReadName(helper.EnterNameAlert);
	int age = ReadAge(helper.EnterAgeAlert);
	PrintName(Name);
	PrintAge(age);
	PrintName(Name,helper.NamleNotification);
	PrintAge(age, helper.AgeNotification);
	return 0;
}