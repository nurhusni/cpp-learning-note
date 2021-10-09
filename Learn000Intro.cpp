#include <iostream>

using namespace std;

int main() 
{
	// 1
	// Without using namespace std and \n for line break
	std::cout << "Hello World!\n";

	// Using namespace std and using endl
	cout << "Let's start learning C++" << endl;

	// Additional:
	// Operator << is called overloaded operator
	// Operators are like functions

	// 2
	// Data Types and Variables
	// Variables are stored in memory, in either stack or heap

	// Primitive Data Types
	bool booleanType = true; // 1 byte = 8 bit | 0 is false, else is true

	short shortNumber; // 2 bytes
	int wholeNumber = -10; // 4 bytes = 32 bits | from -(2^31) to 2^31
	unsigned int positiveNumber = 10; // 4 bytes = 32 bits | from 0 to 2^32
	long longNumber; // 4 bytes
	long long longLongNumber; // 8 bytes

	float shorterDecimal = 5.2f; // 4 bytes
	double decimal = 10.2; // 8 bytes

	char singleCharacter = 'a'; // 1 byte

	// The size of data type can be found using `sizeof(datatype)` or `sizeof datatype`
	cout << sizeof(wholeNumber) << endl; // prints 4

	string firstName = "Panji";
	int age = 22;

	cout << "Age: " << age << endl;

	return 0;
}