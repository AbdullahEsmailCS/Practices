#include<iostream>
#include<string>
using namespace std;

// output string
void Print(const string& text) {
	cout << text << endl;
}

void Print(int number) {
	cout << number << endl;
}
void Print(bool value) {
	cout << value << endl;
}

// input a string
string ReadString(const string& message) {
	Print(message);
	string str;
	getline(cin, str);
	return str;
}

bool IsZeroOrOne(int number) {
	return (number == 0 || number == 1);
}

// input a boolean value 
bool ReadBoolean(const string& message) {
	Print(message);
	bool value;
	cin >> value;
	cin.ignore();
	return value;
}

// input number
int ReadNumber(const string& message) {
	Print(message);
	int number;
	cin >> number;
	cin.ignore();
	return number;
}




int main() {

	int ID = ReadNumber("Enter  a user ID");
	string name = ReadString("Enter a name");
	int age = ReadNumber("enter your age");
	bool IsMarried = ReadBoolean("Enter a  boolean value (1 for married and 0 for not married");
	Print(ID);
	Print(name);
	Print(age);
	Print(IsMarried);

	return 0;
}