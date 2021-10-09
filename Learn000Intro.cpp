#include <iostream>

using namespace std;

int main() 
{
	// Without using namespace std and \n for line break
	std::cout << "Hello World!\n";

	// Using namespace std and using endl
	cout << "Let's start learning C++" << endl;

	// Operator << is called overloaded operator
	// Operators are like functions
	// Above statement is equivalent to

	// Data types
	bool booleanType = true;
	int wholeNumber = 10;
	double decimal = 10.2;
	char singleCharacter = 'a';
	string multipleCharacters = "Learn C++";

	// Variables
	string firstName = "Panji";
	int age = 22;

	cout << "Age: " << age << endl;

	return 0;
}