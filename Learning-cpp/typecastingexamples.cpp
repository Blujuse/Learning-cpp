// Type Casting Examples

#include <iostream>
#include <cstdint>

int typecastingexamples()
{
	using namespace std;

	// Creating ints
	int fahrenheit = 100;
	int celsius;

	// Type casting is needed to get the correct answer as just (5 / 9) calculates integer division
	// So anything that doesn't go into 100 fully will not work, Can type cast to either a float or double, in this case both is done for an example
	celsius = ((float)5 / 9.0) * (fahrenheit - 32);

	cout << "Fahrenheit: " << fahrenheit << endl;
	cout << "Celcius: " << celsius << endl;

	float weight = 10.99;

	cout << endl << endl;
	
	// Printing the floating point version of weight
	cout << "Float          : " << weight << endl;

	// Print the truncated version of weight by casting it an int
	cout << "Integer Part   : " << (int)weight << endl;

	// Print the fractional by taking the int version of weight away from the float version which leaves 0.99 (because 10.99 - 10 = 0.99)
	// Then the 0.99 is shifted over 4 spaces by multiplying it by 10000 (because 0.99 * 10000 = 9900.00)
	// Finally, cast the result to an int to truncate any remaining decimals and print the result.
	// The result will be 9899, this is because floats are being used which have a small margin of error, doubles may work better
	cout << "Fractional Part: " << (int)((weight - (int)weight) * 10000) << endl;


	cout << endl << endl;
	return(0);
}