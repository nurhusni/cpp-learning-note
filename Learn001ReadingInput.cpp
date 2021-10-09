#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string lastName, firstName;

	cout << "Enter your last name: ";
	cin >> lastName;

	// cin stops at white space
	// To get the full line, you need getline() and include <string>
	getline(cin, firstName);

	cout << "Welcome " << firstName << lastName << endl;

	return 0;
}