#include<iostream>
#include<string>

using namespace std;

int ReadPinCode(const string& message) {
	

	int _PINCode=0;

	do {
		cout << message << endl;
		cin >> _PINCode;

	} while (_PINCode != 1234);

	return _PINCode;
}

string ReadUserName(const string& message) {
	

	string userName="";
	do {
		cout << message << endl;
		getline(cin, userName);
		
	} while (userName != "admin");

	return userName;
}



int main() {

	/*string username = ReadUserName("Enter your user name");
	int pin = ReadPinCode("Enter your pin");
	cout << "Login Successfully";*/
	system("color 3C");

	


	return 0;
}