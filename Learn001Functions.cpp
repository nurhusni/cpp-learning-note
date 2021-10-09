#include <iostream>

void HelloWorld()
{
	std::cout << "Hello World" << std::endl;
}

int Multiplty(int a, int b)
{
	return a * b;
}

int main() 
{
	HelloWorld();

	int a = 5, b = 10;

	std::cout << a << " * " << b << " = ";
	std::cout << Multiplty(5, 10) << std::endl;
	return 0;
}