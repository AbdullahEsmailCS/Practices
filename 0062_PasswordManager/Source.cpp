#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

const int SizeOfRecord = 100;
// Data structure
struct PasswordInformation {
	string Username;
	string Password;
	string RecoveryPhone;
};

//Output Funcitons
void DisplayText(string& text) {
	cout << text << endl;
}

// Input Functions
string ReadString(string& message) {
	DisplayText(message);
	string _text;
	getline(cin, _text);
	return _text;

}

string ReadUsername() {
	string alert = "Enter user name";
	string _username = ReadString(alert);
	return _username;
}

string ReadPassword() {
	string alert = "Enter password";
	string _password = ReadString(alert);
	return _password;
}
string ReadRecoveryPhone() {
	string alert = "Enter Recovery phone";
	string _recoveryPhone = ReadString(alert);
	return _recoveryPhone;
}


PasswordInformation ReadPasswordInfoRecord() {
	PasswordInformation pi;
	pi.Username = ReadUsername();
	pi.Password = ReadPassword();
	pi.RecoveryPhone = ReadRecoveryPhone();
	return pi;
}





struct PasswordManager {
	PasswordInformation passList[SizeOfRecord];
	int top =-1;
	
	bool IsFull() {
		if (top == SizeOfRecord - 1)
			return true;
		else
			return false;
	}
	bool IsEmpty() {
		if (top == -1)
			return true;
		else
			return false;
	}
	void Add(PasswordInformation pi) {
		if (IsFull()) {
			cout << "It is Full, Try to remove items and add them again" << endl;
			exit(0);
		}
		else {
			top++;
			passList[top] = pi;
		}
		
	}


	PasswordInformation Pop() {
		if (IsEmpty()) {
			cout << "It is empty";
			exit(0);
		}
		
		PasswordInformation pi = passList[top];
		top--;

		return pi;
	}

	void DisplayRecord(PasswordInformation pi) {
		cout << "Username  :" << pi.Username;
		cout << "\t \tPassword  : " << pi.Password;
		cout << "\t \tRevoeryPHone: " << pi.RecoveryPhone << endl;
	}

	void PrintAllRecord() {

		if (IsEmpty()) {
			cout << "It is empty";
			exit(0);
		}
		cout << "\n\n Records :\t \n";
		for (int i = 0; i <= top; i++) {
			 
			DisplayRecord(Pop());
		}
	}

	
};



int main() {

	PasswordManager pm;
	for (int i = 0; i < 3; i++) {
		PasswordInformation pi = ReadPasswordInfoRecord();
		pm.Add(pi);
	}
	pm.PrintAllRecord();

	return 0;
}