// Console Interaction Challenge, Not following guide, Created from scratch by Will

// Challenge Outlines:
// Ask for the users name and reply
// Do this by printing a message addressing the user's name
// Use the std::cin and std::cout objects

#include <iostream>

// To use strings it must be declared at the top like iostream is
#include <string>

int consoleinteraction()
{
	// The std::string ONLY WORKS FOR SINGLE WORDS

	// This creates a variable called str to hold whatever the user enters
	std::string str;

	std::cout << "Please enter your name: " << std::endl; // I used std::endl here, in his solution he used std::flush which just makes sure the output is definately sent
	// Both achieve the same end goal though

	// The cin object is short for console input and it is waiting for the user to type something into the console window
	std::cin >> str;

	// The console will output the user's name using the "<< str" in the code line
	std::cout << "Your name is: " << str << std::endl;

	std::cout << std::endl << std::endl;
	return(0);
}