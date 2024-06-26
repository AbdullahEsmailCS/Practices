#include<iostream>
#include<string>

using namespace std;

struct Contact {
	string Name;
	string Phone;
};

int ReadNumber(string message) {
	cout << message << endl;
	int _number;
	cin >> _number;
	cin.ignore();
	return _number;
}

string ReadString(string message) {
	cout << message << endl;
	string _text;
	getline(cin, _text);
	return _text;
}

Contact ReadRecord() {
	Contact _contact;
	_contact.Name = ReadString("Enter the contact name");
	_contact.Phone = ReadString("Enter the contact phone");
	return _contact;
}

void DisplayRecord(Contact c) {
	cout << "Name :" << c.Name << "\t";
	cout << "Phone: " << c.Phone << endl;
}

void AddContact(Contact*& contacts, int numberOfContacts) {
	for (int i = 0; i < numberOfContacts; i++) {
		contacts[i] = ReadRecord();
	}
}

void DisplayContacts(Contact*& contacts, int numberOfContacts) {
	for (int i = 0; i < numberOfContacts; i++) {
		DisplayRecord(contacts[i]);
	}
}


int main() {
	 
	int	size = ReadNumber("Enter the size of array contacts");
	Contact* contacts = new Contact[size];
	size_t totalSize = sizeof(contacts);
	size_t elementSize = sizeof(contacts[0]);
	size_t sizeOfArrayContact = totalSize / elementSize;
	AddContact(contacts, size);
	DisplayContacts(contacts, size);
	return 0;
}