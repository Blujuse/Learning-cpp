// Preprocessor Directives

// This is a directive, no path or extension so it will look for the file in a predefined location
#include <iostream>

// Same applies to string
#include <string>

// Provides fixed length int types, no need to depend on primitive types like int or char
// From the C libary not cpp so begins with a C
#include <cstdint>

// Define directive defines symbols to mean whatever you type at the right, symbols are called macros
// This directive defines and replaces
#define CAPACITY 5000 // Usually named in uppercase, anything called CAPACITY will now be replaced by 5000

// No value needed if it will just be used for and ifdef directive, simply comment this out to remove the message from the console output
#define DEBUG

int preprocessordirectives()
{
	using namespace std;

	// Creating a 32 bit int, t stands for type, it is initialised at CAPACITY
	int32_t large = CAPACITY;

	// Creating an unsigned 8 bit int, initialised as 37
	uint8_t small = 37;

// Conditional and work in conjuction with define directives, useful for debugging purposes
// The code will not make it to the final implementation
// Directives are not usually indented with the code
#ifdef DEBUG
	cout << "[About to perform the addition]" << endl;
#endif // DEBUG

	// Adding the two variables and saving it to large
	large += small; // Shorthand for "large = large + small;"

	// Display the value
	cout << "The large integer is " << large << endl;

	cout << endl << endl;
	return(0);
}