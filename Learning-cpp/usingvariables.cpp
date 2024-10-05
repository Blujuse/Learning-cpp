// Using Variables

#include <iostream>

// Declaring variables at the same level of indentation as main make the global
// Can declare two variables on the same line
// Using global variables is bad practice, so mainly use local, the int are purely for this demo
int a, b = 5;

int usingvariables()
{
	// Using namespace at the top removes the need to use std::etc... , it just helps cut down on code
	using namespace std;

	// Declare a local bool variable
	bool myFlag;

	// Setting the a int to 7
	a = 7;

	// Setting the myFlag bool to false
	myFlag = false;

	// Displaying the ints of a and b, and the current state of myFlag
	cout << "a = " << a <<endl;
	cout << "b = " << b << endl;
	cout << "Flag = " << myFlag << endl; // myFlag will be represented as 0, as 0 is false in cpp

	myFlag = true;
	cout << "Flag = " << myFlag << endl; // myFlag will be represented as 1 now, as anything other than 0 is true
	cout << "a + b = " << a + b << endl;
	cout << "b - a = " << b - a << endl;

	// Using unsigned like this will show the twos complement representation of -2 in binary
	unsigned int positive;
	positive = b - a;
	cout << "b - a (unsigned) = " << positive << endl;

	cout << endl << endl;
	return(0);
}