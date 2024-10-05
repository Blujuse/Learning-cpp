// Arrays

#include <iostream>

// Below is a macro, it is not recommended
// #define AGE_LENGTH 4

int Arrays()
{
	using namespace std;

	// This is the better way of doing it
	const size_t AGE_LENGTH = 4;

	// Creating an array of integers, it has 4 places to store integers
	int age[AGE_LENGTH]; // Used to be int age[4]; using AGE_LENGTH makes it easier to control the size of the array

	// Can also initialise arrays on declaration, by including values in curly brackets, no array size is needed as the values are added on declaration
	float temprature[] = { 15.8f, 19.4f, 22.8f }; // Not putting an f at the end of these in this case is ok, the compiler will just take them as doubles, i have them though
	
	// Assigning the array elements with ages, indexing starts at 0
	age[0] = 20;
	age[1] = 26;
	age[2] = 19;
	age[3] = 25;

	// Prints out certain ages from the array and how many are in it
	cout << "The Age array has " << AGE_LENGTH << " elements" << endl;
	cout << "Age[0] = " << age[0] << endl;
	cout << "Age[1] = " << age[1] << endl;
	cout << "Age[2] = " << age[2] << endl;
	cout << "Age[3] = " << age[3] << endl;

	cout << endl << endl;

	// Prints out certain tempratures from the array
	cout << "Temprature[0] = " << temprature[0] << endl;
	cout << "Temprature[1] = " << temprature[1] << endl;
	cout << "Temprature[2] = " << temprature[2] << endl;

	cout << endl << endl;
	return(0);
}