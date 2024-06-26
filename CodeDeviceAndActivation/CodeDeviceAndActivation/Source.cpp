#include<iostream>
#include<string>

using namespace std;


string ReadYourDeviceCode(const string& alert) {
	
	string code = "";
	do {
		cout << alert << endl;
		getline(cin, code);

	} while (code != "1234");
	return code;
}


string ReadActiviationKey(const string& alert) {
	 
	string ActiviationKey = "";
	do {
		cout << alert << endl;
		getline(cin, ActiviationKey);

	} while (ActiviationKey != "1234");
	return ActiviationKey;
}

int main() {

	string deviceCod = ReadYourDeviceCode("Enter your device code");
	string actKey = ReadActiviationKey("Enter the activation key");

	return 0;
}