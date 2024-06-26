#include<iostream>
#include<string>
using namespace std;

string StoredUsername = "admin";
string StoredPassword = "12345";

enum UserLoginStatus {
	Authenticated =0,
	Failed = 1
};

bool IsEqual(string firstText, string secondText) {
	return (firstText == secondText);
}

bool CheckUserNameEquality(string username) {
	return IsEqual(username, StoredUsername);
}

bool CheckUserPasswordEquality(string password) {
	return IsEqual(password, StoredPassword);
}

bool AuthenticateUser(string username, string password) {
	return CheckUserNameEquality(username) && CheckUserPasswordEquality(password);
}

UserLoginStatus CheckLoginCredintial(string username, string password) {
	if (AuthenticateUser(username, password))
		return UserLoginStatus::Authenticated;
	else
		return UserLoginStatus::Failed;
}

string GetLoginStatusAsString(UserLoginStatus status) {
	return (status == UserLoginStatus::Authenticated) ? "Authenticated" : "Failed";
}

void PrintLoginStatus(string status) {
	cout << status << endl;
}

string ReadString(string message) {
	cout << message << endl;
	string _input;
	getline(cin, _input);
	return _input;
}

int main() {

	string _username = ReadString("Enter your user name");
	string _password = ReadString("Enter your password ");
	
	PrintLoginStatus(GetLoginStatusAsString(CheckLoginCredintial(_username, _password)));


	return 0;
}