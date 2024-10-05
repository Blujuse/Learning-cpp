// Simple Program

// Pre processor directive, io contains objects and functions for text
#include <iostream>

int simpleprogram()
{
	// std accesses the standard libary and gets cout, which stands for console output
	// cout tells the console window to output what is next using "<<" which is output the reverse ">>" is for input
	std::cout << "Hello World!" << std::endl;

	// This is used to break the line between the console message and debug log
	std::cout << std::endl << std::endl;

	// The main function needs an int to not cause any errors
	return(0);
}