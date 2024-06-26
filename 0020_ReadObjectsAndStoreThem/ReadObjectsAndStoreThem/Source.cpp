#include<iostream>
#include<string>
using namespace std;

int VariableNumberOfObject = 3;
const int DefaultNumberOfObject = 3;
string SmallestObjects[DefaultNumberOfObject];
string LargestObjects[DefaultNumberOfObject];

const string ReadObjectNameNotification = "Enter the name of the object: ";
const string  ReadNumOfObjectNotification = "Enter the number of the objects ";
const string  SmallestObjectNotification = "\n\tSmallest object's Names :\n";
const string  LargestObjectNotification = "\n\t Largest object's Names :\n";

string GetObjectPrompt(int number) {
	return ReadObjectNameNotification + to_string(number);
}

string ReadObjectName(const string& message) {

	string _objectName = "";
	cout << message << endl;
	getline(cin, _objectName);

	return _objectName;
}

void ReadSmallestObjectNames() {
	cout << "\nReading Smallest Objects\n";
	for (int i = 0; i < DefaultNumberOfObject; i++) {
		SmallestObjects[i] = ReadObjectName(GetObjectPrompt(i + 1));
	}

}

void ReadLargestObjectNames() {

	cout << "\nReading Largest Objects\n";
	for (int i = 0; i < DefaultNumberOfObject; i++) {
		LargestObjects[i] = ReadObjectName(GetObjectPrompt(i+1));
	}

}

void PrintSmallestObjectNames() {

	cout << SmallestObjectNotification;

	for (int i = 0; i < DefaultNumberOfObject; i++) {
	cout<< "\t" << SmallestObjects[i]<<"\n";
	}
	
}

void PrintLargestObjectNames() {

	cout << LargestObjectNotification;

	for (int i = 0; i < DefaultNumberOfObject; i++) {
		cout <<"\t"<< LargestObjects[i] << "\n";
	}
	cout << endl;
}


/*
* --------------------------------------------------------------------------------------------------------------
Problem Description:

 In the project file, there is an image titled "image1" that illustrates two containers. 
 The first container is intended to store the names of the smallest objects, while the second container is meant for the largest objects.
 Your task is to develop a program that reads and categorizes the names of the smallest and largest objects,
 correctly storing them in their respective containers.
------------------------------------------------------------------------------------------------------------------
Requirements:
Read the names of largest objects
Read the names of the smallest objects
Print the names of largest objects
print the names of smallest object

----------------------------------------------------------------------------------------------------
Problem Analysis-:
Inputs:
-three smallest object's name
-three largest object's name

Outputs:
-printing the smallest and largest object's names

Constraints: unknown

Constant Values:
DefaultNumberOfObject =3
 ReadObjectNameNotification = "Enter the name of the object: ";
 ReadNumOfObjectNotification = "Enter the number of the objects ";
 SmallestObjectNotification = "\n\tSmallest object's Names :\n";
 LargestObjectNotification = "\n\t Largest object's Names :\n";


Decomposing problem:

Function To Read Only object name
Function to read the samllest names
function to read the largest
function to get a numbered format
function to print the largest objects
function to print the smallest objects

Design Phase:
Data Structures :آ
-SmallestObjects[DefaultNumberOfObject]
-LargestObjects[DefaultNumberOfObject];

Aglorithm Name: unknown
Time Complexity: O(1)
Space Complexity:
Solution Technique:

*/
int main() {
	ReadLargestObjectNames();
	ReadSmallestObjectNames();
	PrintLargestObjectNames();
	PrintSmallestObjectNames();
	return 0;
}