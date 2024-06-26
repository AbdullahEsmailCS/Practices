#include<iostream>
#include<string>
using namespace std;

/*
 
/*
Function Definition:

A function is a named block of code that performs a specific task. It has the following characteristics:
- Function Name: A unique name that identifies the function.
- Return Type: Specifies the type of value that the function returns (if any).
- Parameter List: Zero or more parameters (variables, arrays, objects) that the function accepts.

Function Usage:

Functions are used to modularize code and improve code reusability. They are invoked by calling their name and, if necessary, passing arguments (values) to the parameters.

Function Characteristics:
1. Return a Type and has no parameters:
   - Return Type: Specifies the type of value returned by the function.
   - Function Name: Unique identifier for the function.
   - Parameter List: No parameters accepted.

2. Return a Type and Accept parameters:
   - Return Type: Specifies the type of value returned by the function.
   - Function Name: Unique identifier for the function.
   - Parameter List: One or more parameters accepted.

3. No return a Type and Accept parameters:
   - Return Type: void (no return value).
   - Function Name: Unique identifier for the function.
   - Parameter List: One or more parameters accepted.

4. Accept parameters and do not return a value:
   - Return Type: void (no return value).
   - Function Name: Unique identifier for the function.
   - Parameter List: One or more parameters accepted.

Key Points:
- Function Declaration
- Function Definition
- A function has a name that uniquely identifies it.
- A function has a return type, which specifies the type of value it returns (if any).
- A function can have zero or more parameters, which are variables, arrays, or objects accepted by the function.
- Parameters are considered local variables within the function.
- Parameters can be passed by value (a copy of the value is passed) or by reference (a reference to the original value is passed).
- Default parameters are optional values that can be specified for parameters.
- The function signature consists of the return type, function name, and parameter list.
- Function overloading allows defining multiple functions with the same name but different parameter lists.
- Parameter vs arguement

Function Overloading:
Function overloading is the ability to define multiple functions with the same name but different parameter lists.
This allows using the same function name for related operations, improving code readability and flexibility.

Example of overloading:
int sum(int a, int b); // Function declaration
float sum(float a, float b); // Function declaration
*/


// Function Syntax:
// return_type function_name(parameter_list) {
//     // Function body (code)
// }

// Function Declaration:
// return_type function_name(parameter_list);

// Function Definition:
// return_type function_name(parameter_list) {
//     // Function body (code)
// }


int main() {
   

    return 0;
}
 










































//
//
//// Function that returns an integer and has no parameters
//int getRandomNumber() {
//    return rand();  // Returns a random number
//}
//
//// Function that returns the maximum of two integers
//int max(int a, int b) {
//    if (a > b)
//        return a;
//    else
//        return b;
//}
//
//// Function that prints the sum of two integers without returning a value
//void printSum(int a, int b) {
//    int sum = a + b;
//    cout << "Sum: " << sum << endl;
//}
//
//// Function that calculates and displays the area of a rectangle without returning a value
//void calculateArea(int length, int width) {
//    int area = length * width;
//    cout << "Area: " << area << endl;
//}
//








// Problem 1: Calculate the sum of two numbers: Write a program that takes two numbers
//  as input and returns their sum.
// Problem 2: Find the maximum of three numbers: Write a program that takes three numbers as input and returns the maximum among them.
// Problem 3: Check if a number is even or odd: Write a program that takes a number as input and checks if it is even or odd.
// Problem 4: Calculate the factorial of a number: Write a program that takes a number as input and calculates its factorial.
// Problem 5: Check if a number is prime: Write a program that takes a number as input and checks if it is a prime number.

//// Mathematical operators: +, -, *, /, %
// Comparison operators: <, >, <=, >=, ==, !=
// // Logical Operators: &&, ||, ! 
 


//problem: write a program to compute teh  sum of two numbers and print the sum
//- read the first number numbers
//- read the second number
//- calculate the sum of the two number
//- print the sum of two numbers.

/*
    Syntax:
    return type  FunctionName();


    syntax :
    return type FunctionName(){
    // function body
    -statement 
    -experssions
    
    }
*/
//
//enum Permission {
//    None = 0,
//    Read = 1,
//    Write = 2,
//    Execute = 4
//};
//
//class User {
//private:
//    std::string username;
//    Permission permissions;
//
//public:
//    User(const std::string& name) : username(name), permissions(None) {}
//
//    void GrantPermission(Permission permission) {
//        permissions = static_cast<Permission>(permissions | permission);
//    }
//
//    void RevokePermission(Permission permission) {
//        permissions = static_cast<Permission>(permissions & ~permission);
//    }
//
//    bool CheckPermission(Permission permission) const {
//        return (permissions & permission) != 0;
//    }
//
//    std::string GetUsername() const {
//        return username;
//    }
//
//    void ClearPermissions() {
//        permissions = None;
//    }
//
//    Permission GetPermissions() const {
//        return permissions;
//    }
//
//    std::string GetPermissionString() const {
//        std::string permissionString;
//
//        if (permissions & Read) {
//            permissionString += "Read ";
//        }
//
//        if (permissions & Write) {
//            permissionString += "Write ";
//        }
//
//        if (permissions & Execute) {
//            permissionString += "Execute";
//        }
//
//        return permissionString;
//    }
//
//
//
//
//
//
//
//
//
//
//};
//
//
//
//
//
//
//
//
//
//
//// Input and Output Functions
//
//int ReadNumber(string& message) {
//    cout << message << endl;
//    int number;
//    cin >> number;
//    return number;
//}
//
//bool ReadBoolean(string& message) {
//    cout << message << endl;
//    bool value;
//    cin >> value;
//    return value;
//}
//
//char ReadCharacter(string& message) {
//    cout << message << endl;
//    char value;
//    cin >> value;
//    return value;
//}
//
//string ReadString(string& message) {
//    cout << message << endl;
//    string value;
//    cin >> value;
//    return value;
//}
//
//
//
//
//
//
//
//
////---------------------End iNput output functions
//
//bool IsEqual(int firstNumber, int secondNumber) {
//    return firstNumber == secondNumber;
//}
//
//bool IsNotEqual(int firstNumber, int secondNumber) {
//    return firstNumber != secondNumber;
//}
//
//bool IsGreater(int firstNumber, int secondNumber) {
//    return firstNumber > secondNumber;
//}
//bool IsGreaterOrEqual(int firstNumber, int secondNumber) {
//    return firstNumber >= secondNumber;
//}
//
//bool IsLessThan(int firstNumber, int secondNumber) {
//    return firstNumber < secondNumber;
//}
//bool IsLessThanOrEqual(int firstNumber, int secondNumber) {
//    return firstNumber <= secondNumber;
//}
////----------------------------------------------------------------
//int CalculateSum(int firstNumber, int secondNumber) {
//    return firstNumber + secondNumber;
//}
//
//int CalculateSubtraction(int firstNumber, int secondNumber) {
//    return firstNumber - secondNumber;
//}
//
//int CalculateMultiplication(int firstNumber, int secondNumber) {
//    return firstNumber * secondNumber;
//}
//
//int CalculateDivision(int firstNumber, int secondNumber) {
//    if (IsEqual(secondNumber,0)) {
//        return -1;
//    }
//
//    return firstNumber / secondNumber;
//}
//
//int CalculateRemainder(int firstNumber, int secondNumber) {
//    return firstNumber % secondNumber;
//}
////--------------------------------------------------------------------
//bool IsEqualNegativeOne(int firstNumber, int secondNumber = -1) {
//    return IsEqual(firstNumber, secondNumber);
//}
//
//
//
//
////------------Logic function
//bool And(bool con1, bool con2) {
//    return con1 && con2;
//}
//
//bool Or(bool con1, bool con2) {
//    return con1 || con2;
//}
//
//bool Not(bool value) {
//    return !value;
//}
////---------End Logic Functions
//
////-------Increment Prefix By One
//int IncrementPrefix(int value) {
//    return ++value;
//}
//
//int IncrementSuffix(int value) {
//    return value++;
//}
//
//int DecrementPrefix(int value) {
//    return --value;
//}
//
//int DecrementSuffix(int value) {
//    return value--;
//}
//
//
//
//// Declaration
//void Print(string message);
//
//
//
//void Print(string message) {
//    cout << message << endl;
//}
//
//int ReadNumber(string message) {
//    Print(message);
//    int number;
//    cin >> number;
//    return number;
//}
//
//int Sum(int firstNumber, int secondNumber) {
//    return firstNumber + secondNumber;
//}
//
//void PrintSum(int sum) {
//    cout << "Sum is :" << sum << endl;
//}
//
//int main() {
//    int firstNumber, secondNumber;
//   /* cout << "Enter the first number:";
//    cin >> firstNumber;
//    cout << "Enter the second number: ";
//    cin >> secondNumber;
//    int sum = firstNumber + secondNumber;
//    cout << "Sum is: " << sum << endl;*/
//
//    firstNumber = ReadNumber("Enter the first number:");
//    secondNumber = ReadNumber("Enter the second number: ");
//    int sum = Sum(firstNumber, secondNumber);
//    PrintSum(sum);
//
//
//    return 0;
//}
// 