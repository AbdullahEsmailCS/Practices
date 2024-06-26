#include<iostream>
#include<string>
using namespace std;

struct StaticContentHelper {
	string ColonSeparator = " : ";
	string NamleNotification = "Name is";
	string AgeNotification = "Age is ";
	string AgeCategoryNotification = "AgeCategory ";
	string EnterNameAlert = "Enter your name";
	string EnterAgeAlert = "Enter your age";
}helper;

enum class  AgeCategory {
	None,
	CHILD,    // Age below 18
	ADULT,    // Age 18 or above
	ELDERLY   // Age 65 or above
};

//bool IsAgeBelow();
//bool IsAgeAbove();

AgeCategory GetAgeCategory(int age) {
	if (age < 18) {
		return AgeCategory::CHILD;
	}
	else if (age >= 65) {
		return AgeCategory::ELDERLY;
	}
	else {
		return AgeCategory::ADULT;
	}
}

string GetAgeCategoryString(AgeCategory category) {
	switch (category) {
	case AgeCategory::CHILD:
		return "Child";
	case AgeCategory::ADULT:
		return "Adult";
	case AgeCategory::ELDERLY:
		return "Elderly";
	default:
		return "Unknown";
	}
} 

  struct Person {
	string Name;
	int Age;
	AgeCategory AgeCategory = AgeCategory::None;
};

void Print(string message) {
	cout << message << endl;
}


void Print(string message, string titleAlert) {
	cout << titleAlert << helper.ColonSeparator << message << endl;
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
void PrintName(string name) {
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

void PrintAgeCategory(AgeCategory ageCategory) {

	Print(GetAgeCategoryString(ageCategory),helper.AgeCategoryNotification);
}

Person ReadPersonInformation() {
	Person person;
	person.Name = ReadName(helper.EnterNameAlert);
	person.Age = ReadAge(helper.EnterAgeAlert);
	person.AgeCategory= GetAgeCategory(person.Age);
	return person;

}

void PrintPersonInformation(Person person) {
	PrintName(person.Name, helper.NamleNotification);
	PrintAge(person.Age, helper.AgeNotification);
	PrintAgeCategory(person.AgeCategory);
}


int main() {
	
	Person personAbood = ReadPersonInformation();
	PrintPersonInformation(personAbood);

	return 0;
}