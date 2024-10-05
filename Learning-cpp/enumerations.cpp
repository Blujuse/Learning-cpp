// Enumerations

#include <iostream>
#include <cstdint>

// Each is assigned a sequential integer value starting from 0
//enum cow_purpose {dairy, meat, hide, pet}; // Used to encode the purpose a farmer will assign to his cow
enum class cow_purpose { dairy, meat, hide, pet };

// Creating another enum with the same names will cause errors, and they have different values so meat could mean 1 or 2, and dairy could mean 0 or 4
//enum grocery_section {canned, frozen, meat, laundry, dairy, bakery};
enum class grocery_section { canned, frozen, meat, laundry, dairy, bakery };

// All the above isuues can be fixed by using scoped enums or strongly typed enums, simply change enum to enum class

int enumerations()
{
	using namespace std;
	
	// If i make an int called meat and assign it the value of 8, since a = meat, the integer 8 will be displayed in the console rather than the enum value
	// This is because it is a local variable so a = meat assumes it is the one that I want to use
	int meat = 8;

	// Making and int and assigning its value to meat, which is 1
	//int a;
	cow_purpose a;
	a = cow_purpose::meat; // To fix a = cow_purpose::meat; from erroring can either cast like a = (int)cow_purpose::meat; or change int a; to cow_purpose a;

	// Printing a int, this will be displayed as 1 because this is the enums value for meat
	// Since a is now cow_purpose a; it must be casted back to an int
	cout << "a = " << (int)a << endl;

	cout << endl << endl;
	return(0);
}