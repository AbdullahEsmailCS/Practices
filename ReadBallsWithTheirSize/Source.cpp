#include<iostream>
#include<string>
using namespace std;

const int DefaultNumberOfBalls = 4;

enum IONotificationEnum {
    ObjectNametNotification =1,
    ObjectSizeNotification =2,
    ObjectName =3,
    ObjectSize = 4
};

string GetObjectNotificationString(IONotificationEnum notify) {
    
    switch (notify) {
    case IONotificationEnum::ObjectNametNotification:
            return "Enter the ";
            break;
    case IONotificationEnum::ObjectSizeNotification:
        return "Enter size of Object ";
        break;
    case IONotificationEnum::ObjectName:
        return "Object Name: ";
        break;

    case IONotificationEnum::ObjectSize:
        return "Object Size: ";
        break;

    default:
        return "Invalid";
        break;
           
    }
}

string GetTheStyledAlert(string firstPart, string second , string third=" Object Name: ") {
    return firstPart + second + third;
}

IONotificationEnum GetObjectNameNotify() {
    return IONotificationEnum::ObjectName;
}

IONotificationEnum GetObjectSizeNotify() {
    return IONotificationEnum::ObjectSize;
}

IONotificationEnum GetObjectSizeNotification() {
    return IONotificationEnum::ObjectSizeNotification;
}

IONotificationEnum GetObjectNametNotification() {
    return IONotificationEnum::ObjectNametNotification;
}

 
 
struct Ball {
    string Name;
    int size;
};

//Data Structure for Ball Objects

Ball ObjectBalls[4];

 
//_____________________Helper Functions ---------------------------------
// 

string GetObjectPrompt(const string& notification, int number) {
    return notification + to_string(number);
}

// constexpr is a compile-time constant
template <typename T, size_t N>
constexpr size_t GetArraySize(T(&)[N]) {
    return N;
}
int GetNumberOfItemsInArray( string arr[], int size) {
    return size;
}

 string getOrdinalText(int number) {
    // Array of ordinal text representations
      string ordinals[] = {
        "First", "Second", "Third", "Fourth", "Fifth",
        "Sixth", "Seventh", "Eighth", "Ninth", "Tenth"
     };
     int _length = GetNumberOfItemsInArray(ordinals, GetArraySize(ordinals));
     
    // Check if the number is within the valid range
    if (number >= 1 && number <= _length) {
        return ordinals[number - 1];
    }
    else {
        return "Invalid";
    }
}

string ReadAString( string message) {

	string _object = "";
	cout << message << endl;
	getline(cin, _object);

	return _object;
}


int ReadIntegerNumber( string message) {
    cout << message << endl;
    int _number;
    cin >> _number;

    return _number;
}


Ball ReadBallObject(int index) {
    Ball object;
    
    string s = GetTheStyledAlert(GetObjectNotificationString(GetObjectNametNotification()), getOrdinalText(index));
    string propmptName = GetObjectPrompt(s, index);
    string promptSize = GetObjectPrompt(GetObjectNotificationString(GetObjectSizeNotification()), index);
    object.Name = ReadAString(propmptName);
    object.size = ReadIntegerNumber(promptSize);
    return object;
}

void ReadAllObjectBalls() {
     
    int size = DefaultNumberOfBalls;
    for (int i = 0; i < DefaultNumberOfBalls; i++) {
        ObjectBalls[i] = ReadBallObject(i+1);
        cin.ignore(); //Ignore the newline character left in the input buffer
    }
}


void PrintAllObjectBallInfo() {

    int size =  DefaultNumberOfBalls;
    for (int i = 0; i < size; i++) {
        cout << GetObjectNotificationString(GetObjectNameNotify()) << ObjectBalls[i].Name << "\t";
        cout << GetObjectNotificationString(GetObjectSizeNotify()) << ObjectBalls[i].size << endl;
    }
}

















/*
* --------------------------------------------------------------------------------------------------------------
Problem Description:

 In the project file, there is an image titled "ImageBall" that illustrates variants balls with their names and sizes.
 Your task is to develop a program that reads the four balls with their names and sizes and get the the smallest ball size and the largest one,
 plus the difference between the the largest and smallest
------------------------------------------------------------------------------------------------------------------
Requirements:
 read the name of the balls with their sizes and them get the max , min , difference beteen max and min of them

----------------------------------------------------------------------------------------------------
Problem Analysis-:
Inputs:
- four objects of balls that contains name and size
-

Outputs:
- get max, min, difference beteen the max size and min size of the ball

Constraints:  

Constant Values:
 


Decomposing problem:

 

Design Phase:
Data Structures :
- 
- 

Aglorithm Name:  
Time Complexity:  
Space Complexity:
Solution Technique:

*/
int main() {
 

    ReadAllObjectBalls();
    PrintAllObjectBallInfo();
    


	return 0;
}