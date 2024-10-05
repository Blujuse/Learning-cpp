// Type Casting

#include <iostream>
#include <cstdint>

int typecasting()
{
	using namespace std;

	float flt;
	int32_t sgn;
	uint32_t unsgn;

	flt = -7.66; // Lacking the f so it is a double constant, example of implicit type conversion/casting
	sgn = flt; // Since you can't assign a float to an int, the type is converted similar to the above example, it will round down to a whole num
	
	// The below is unresonable so will be copied as the 32 bit version of 7
	unsgn = sgn;

	cout << "float: " << flt << endl;
	cout << "int32: " << sgn << endl;
	
	// This is an example of explicit type casting as the unsigned int is being converted into a signed int
	cout << "unit32: " << (int32_t)unsgn << endl;

	cout << endl << endl;
	return(0);
}