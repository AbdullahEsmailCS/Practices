#include<iostream>

using namespace std;

/*
* 
* There are many different types of information that can be represented as data in computer systems. Here are some common examples:

    Numeric Data:
        Integers: Whole numbers without decimal points (e.g., 42, -10, 0).
        Floating-Point Numbers: Decimal numbers with fractional parts (e.g., 3.14, -2.5, 0.0).

    Character Data:
        Individual Characters: Letters, digits, symbols, and special characters (e.g., 'A', '7', '#').
        Strings: Sequences of characters (e.g., "Hello, World!", "12345").

    Boolean Data:
        Boolean values: Represents logical states such as true or false.

    Date and Time Data:
        Dates: Representing specific calendar dates (e.g., "2022-01-01").
        Times: Representing specific points in time (e.g., "10:30 AM").
        Date and Time: Combination of date and time information (e.g., "2022-01-01 10:30 AM")
* 
* 
* 
* 
* 
* 

In C++, variables can be categorized based on different criteria. 

some common categories of variables:

1. Primitive Data Types: These are the basic data types provided by the language, 
such as `int`, `float`, `char`, `bool`, etc. They hold simple values and are used to represent fundamental data.

2. Derived Data Types: These are data types derived from the primitive types or other derived types. 
Examples include arrays, structures, unions, and enumerations.

3. Global Variables: These are variables declared outside of any function or block, m
aking them accessible throughout the program. Global variables have global scope and can be accessed by any part of the program.

4. Local Variables: These are variables declared within a function or block and have local scope. 
They are only accessible within the function or block where they are declared.

5. Static Variables: Static variables are local variables that retain their values between function calls.
They are initialized only once and preserve their value across multiple function invocations.

6. Constant Variables: These variables are declared with the `const` keyword and hold values that cannot be modified 
after initialization. They are used to represent fixed values or constants in the program.

7. Reference Variables: Reference variables are aliases or alternative names for existing objects. 
They are declared using the ampersand symbol (`&`) and provide a way to refer to an existing object by a different name.

8. Pointer Variables: Pointer variables store memory addresses of other variables.
They allow indirect access to variables and are often used for dynamic memory allocation and manipulation.
 
*/

// Global Variables:
// - Declared outside of any function or block, making them accessible throughout the program.
// - Have global scope and can be accessed from any part of the program.
// - Can be modified and accessed by multiple functions or blocks.
// - Global variables have static duration, meaning they exist throughout the entire program execution.

// Local Variables:
// - Declared within a function or block and have local scope.
// - Only accessible within the function or block where they are declared.
// - Each invocation of the function creates a new instance of local variables.
// - Local variables have automatic duration, meaning they are created and destroyed each time the function or block is executed.

// Static Variables:
// - Local variables declared with the static keyword.
// - Retain their values between function calls.
// - Initialized only once during the program's lifetime.
// - Preserve their value across multiple invocations of the function.
// - Static variables have static storage duration, meaning they exist throughout the entire program execution.

// Constant Variables:
// - Declared with the const keyword.
// - Hold values that cannot be modified after initialization.
// - Used to represent fixed values or constants in the program.
// - Provide read-only access to the value they hold.
// - Constants are often used to improve code readability and prevent accidental modification.

// Reference Variables:
// - Aliases or alternative names for existing objects.
// - Declared using the ampersand symbol (&).
// - Provide a way to refer to an existing object by a different name.
// - Changes made to the reference variable also affect the original object.
// - References are often used to pass arguments by reference to functions or to create alternative names for variables.

// Pointer Variables:
// - Store memory addresses of other variables or objects.
// - Allow indirect access to variables and objects.
// - Used for dynamic memory allocation and manipulation.
// - Can be used for creating data structures like linked lists, trees, and graphs.
// - Pointers require explicit memory management and can be used for efficient memory utilization.











int main() {



	return 0;
}