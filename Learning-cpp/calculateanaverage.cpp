// Calculate an Average Challenge, Not following guide, Created from scratch by Will

// Challenge Outlines:
// Calculate the average in an array of five integers
// Just add the values and divide by 5
// Store the result in a float variable
// Print the average on the screen

#include <iostream>
#include <cstdint>

int main()
{
	using namespace std;

	// Making array size
	const size_t ARRAYNUM = 5;

	// Making array and storing numbers in it
	int myInts[ARRAYNUM] = { 3, 6, 7, 4, 1 };

	// Adding things stored in the array together
	float average = myInts[0] + myInts[1] + myInts[2] + myInts[3] + myInts[4];

	// Printing and dividing the total by the number of items in the array
	cout << "Average: " << average / (float)ARRAYNUM << endl;

	cout << endl << endl;
	return(0);
}