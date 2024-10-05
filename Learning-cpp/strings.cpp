// Strings

#include <iostream>
#include <string>

// The below directive is from C and contains functions to handle character array strings
#include <cstring>

int strings()
{
	using namespace std;

	// const, means the variable is constant, and size_t is the unsigned integer type
	const size_t LENGTH1 = 25;

	// Sets a character array with the size of LENGTH1
	char array_str1[LENGTH1] = "Hey guys! "; // const string, a squence of ASCII characters terminated by zero, all 8 bits after the last character are zero

	// Making another array, no specified length
	char array_str2[] = "What's up?";

	// Creating strings
	string std_str1 = "Hi everybody! ";
	string std_str2 = "How's the going?";

	// strcat provided by cstring directive, function used to join two different arrays together, it does not get rid of the one that will be joined
	// First array used will hold the second one stated, the final thing added is the max length to produce, this will be the max of the destination array
	strncat_s(array_str1, array_str2, LENGTH1);

	// Printing the strncat array
	cout << array_str1 << endl;

	// For the string class you can join them together like this, neither of the operands will be modified
	cout << std_str1 + std_str2 << endl;

	cout << endl << endl;
	return(0);
}