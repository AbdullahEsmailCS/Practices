#include<iostream>
#include<string>
using namespace std;

const string AddNewIDAlert = "Type ID:";


int ReadIntegerNumber(string message) {
	cout << message << endl;
	int _number;
	cin >> _number;
	cin.ignore();
	return _number;
}

bool ReadBoolean(string message) {
	cout << message << endl;
	bool _value;
	cin >> _value;
	cin.ignore();
	return _value;
}

string ReadString(string message) {
	cout << message << endl;
	string _value;
	getline(cin, _value);
	return _value;
}

struct Student {
	int ID =-1;
	string FirstName;
	string LastName;
	string Username;
	string Password;
	string Email;
	bool IsActive = false;

	static Student ReadStudentInfromation() {
		Student s;
		s.ID = ReadIntegerNumber("Enter ID:");
		s.FirstName = ReadString("enter FirstName:");
		s.LastName = ReadString("Enter Second Number");
		s.Username = ReadString("Enter user name:");
		s.Password = ReadString("Enter password:");
		s.Email = ReadString("Enter Email :");
		s.IsActive = ReadBoolean("Is the student Active? (0 For No, 1 For Yes");

		return s;

	}
	
};


  Student ReadStudentInfromation() {
	Student s;
	s.ID = ReadIntegerNumber("Enter ID:");
	s.FirstName = ReadString("enter FirstName:");
	s.LastName = ReadString("Enter Second Number");
	s.Username = ReadString("Enter user name:");
	s.Password = ReadString("Enter password:");
	s.Email = ReadString("Enter Email :");
	s.IsActive = ReadBoolean("Is the student Active? (0 For No, 1 For Yes");

	return s;

}

void printLabelValue(const string& label, const  string& value) {
 cout << label << value <<  endl;
}

void printLabelValue(const  string& label, int value) {
	 cout << label << value <<  endl;
}

void printLabelValue(const  string& label, bool value) {
	 cout << label << (value ? "true" : "false") <<  endl;
}

void printStudentInfo(const Student& user) {
	printLabelValue("ID: ", user.ID);
	printLabelValue("First Name: ", user.FirstName);
	printLabelValue("Last Name: ", user.LastName);
	printLabelValue("Username: ", user.Username);
	printLabelValue("Password: ", user.Password);
	printLabelValue("Email: ", user.Email);
	printLabelValue("IsActive: ", user.IsActive);
}
int main() {

	Student s = Student::ReadStudentInfromation();
	printStudentInfo(s);

	return 0;
}