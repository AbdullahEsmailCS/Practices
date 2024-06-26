#include<iostream>
using namespace std;
/*
	Enums, short for enumerations, are a feature in programming languages that
	allow you to define a set of named values.
	Enums provide a way to represent a collection of related constants,
	making code more readable and maintainable.

	**Why to use enums:**
	1. Readability: Enums make the code more readable and self-explanatory by using descriptive names for values instead of arbitrary numbers or strings.
	2. Type Safety: Enums provide type safety by restricting the possible values to a predefined set, preventing accidental assignments of invalid values.
	3. Code Maintenance: Enums make the code easier to maintain by providing a central place to define and manage related constants.
	4. Improved Documentation: Enums serve as self-documenting code, making it easier for other developers to understand the purpose and usage of certain values.
	5. Compiler Checks: Enums can be checked by compilers for value validity, ensuring that the code is less prone to runtime errors and unexpected behavior.

	**When to use Enums:**
	Enums are useful in the following scenarios:
	1. Representing a finite set of related options or states (e.g., days of the week, colors, status codes).
	2. Defining flags or bit masks to represent combinations of options or settings.
	3. Enhancing code clarity and reducing the chances of errors when dealing with a limited set of values.
	4. Improving code maintainability by providing self-documented constants.

	**Features of Enums:**
	1. Named Values: Enums allow you to assign meaningful names to specific values.
	2. Type Safety: Enums provide type safety by restricting variable assignments to the defined enum values.
	3. Integer Representation: Enums are internally represented as integers, with each enum value assigned a unique integer (starting from 0 by default).
	4. Implicit Conversions: Enums can be implicitly converted to integers, allowing them to be used in arithmetic operations or comparisons.
	5. Scoped Enums: C++ introduced scoped enums (enum classes) for better scoping and to avoid naming conflicts.

	**Common Operations Performed on Enums:**
	1. Assigning enum values to variables.
	2. Comparing enum values using equality or relational operators.
	3. Using enums in switch statements to execute different code blocks based on the enum value.
	4. Converting enums to integers explicitly using `static_cast`.
	5. Specifying a custom underlying type for enums.
	6. Using enums as function parameters or return types.
	7. Combining enum values using bitwise operators for flag-based representations.


	*/











// Declaring Enum
enum Color {
	RED,
	GREEN,
	BLUE
};
// Note: Assigning Enum Values: Enum values are assigned 
//automatically with incrementing integers starting from 0 (unless explicitly specified).

// Explicitly Assigning Enum Values:
// You can assign specific values to enum constants by explicitly specifying them.
enum Day {
	MONDAY = 1,
	TUESDAY = 2,
	WEDNESDAY = 3
};


// Specifying Enum Underlying Type: By default, the underlying type of an enum is int. 
// However, you can specify a different underlying type explicitly.
//enum Colors {
//	RED,
//	GREEN,
//	BLUE
//};

enum class Status {
	OK,
	ERROR
};


// Enum as a bit flags for permissions
enum Permissions {
	READ = 1,
	WRITE = 2,
	EXECUTE = 4,
	DELETE = 8
};


// Using Enums as Function Parameters and Return Types
Status doSomething();
void processStatus(Status status);

 


int main() {
	
	Color c =Color::RED;
	
	if (c == BLUE) {
		// Do something
	}
	
	
	// Enum conversion from integer to enum
	int value = 1;
	Status s = static_cast<Status>(value);

	// enum conversion from enum to integer
	int value1 = Color::GREEN;
	cout << value1 << endl;


	 







	return 0;
}