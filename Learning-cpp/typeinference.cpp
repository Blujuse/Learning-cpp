// Type Inference with auto

#include <iostream>

// Convinient way of creating a variable with the type that suits the value you want to assign to it
// However the variable must be initialised at declaration
#include <typeinfo>

int typeinference()
{
	using namespace std;

	// Using the auto keyword cpp will automatically assign variable types based on what is assigned
	auto a = 8;
	auto b = 12345678901;
	auto c = 3.14f;
	auto d = 3.14;
	auto e = true;
	auto f = 'd';
	auto g = "C++ is awesome...";

	// typeid(variable goes here).name() is used to show what the variable type has been assigned
	cout << "The Type of a is " << typeid(a).name() << endl;
	cout << "The Type of b is " << typeid(b).name() << endl;
	cout << "The Type of c is " << typeid(c).name() << endl;
	cout << "The Type of d is " << typeid(d).name() << endl;
	cout << "The Type of e is " << typeid(e).name() << endl;
	cout << "The Type of f is " << typeid(f).name() << endl;
	cout << "The Type of g is " << typeid(g).name() << endl;

	cout << endl << endl;
	return(0);
}