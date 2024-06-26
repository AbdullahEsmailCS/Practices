
#include<iostream>
#include<string>
using namespace std;

string ConfirmationMessage = "The Driver is ";
string EnterAgeNotification = "Enter the Age of the driver: ";
string HasDriverLicenseNotification = "Do You Have Driver Licesen? Yes: 1,NO: 0 ";
string HasRecommendationNotification = "Do You Have Recommendation? Yes: 1,NO: 0 ";
int AgeThreshold = 21;

enum enHireType {
	Hired = 0,
	Rejected = 1
};

int ReadPositiveNumber(string alert) {
	cout << alert << endl;
	int _number;
	do {
		cin >> _number;
	} while (_number <= 0);

	return _number;
}

bool ReadQuestionInput(string alert) {
	cout << alert << endl;
	bool hasDriverLicense;
	cin >> hasDriverLicense;
	return hasDriverLicense;
}

struct DriverInfo {
	int Age;
	bool HasLicense;
	bool HasRecommendation;
};

DriverInfo ReadDriverInformation() {
	DriverInfo info;
	info.Age = ReadPositiveNumber(EnterAgeNotification);
	info.HasLicense = ReadQuestionInput(HasDriverLicenseNotification);
	info.HasRecommendation = ReadQuestionInput(HasRecommendationNotification);
	return info;
}


bool HasDriverLicense(bool result) {
	return (result == true) ? true : false;
}

bool HasRecommendation(bool result) {
	return (result == true) ? true : false;
}

bool CheckAgeEligability(int age) {
	if (age > AgeThreshold)
		return true;
	else
		return false;
}

enHireType CheckEmploymentConditions(DriverInfo driver) {
	if (HasRecommendation(driver.HasRecommendation))
	{
		return enHireType::Hired;
	}
	else if (CheckAgeEligability(driver.Age) && HasDriverLicense(driver.HasLicense)) {
		return enHireType::Hired;
	}
	else
		return  enHireType::Rejected;
}

string GetHiringTypeAsString(enHireType hireType) {
	if (hireType == enHireType::Hired)
		return "Hired";
	else
		return "Rejected";
}


void PrintHiringType(string hireTypeString) {
	cout << ConfirmationMessage << hireTypeString << endl;
}

int main() {
	enHireType hireType = CheckEmploymentConditions(ReadDriverInformation());
	string hiringText = GetHiringTypeAsString(hireType);
	PrintHiringType(hiringText);

	return 0;
}