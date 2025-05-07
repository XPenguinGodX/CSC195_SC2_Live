#include <iostream>

int main()
{
	std::cout << "Data Types Project" << std::endl;

	int i = 0;

	//DataTypes
	int a = 5; // Integer
	float b = 5.5f; // Float
	double c = 5.55; // Double
	char d = 'A'; // Character
	bool e = true; // Boolean

	std::cout << "Integer: " << a << "\n";
	std::cout << "Float: " << b << "\n";
	std::cout << "Double: " << c << "\n";
	std::cout << "Character: " << d << "\n";
	std::cout << "Boolean: " << e << "\n";

	return 0;

	//Data Type Conversion
	//Implicit conversion
	// Target Data type has the capacity (Memory) to store the original value
	int numInt = 5;
	float numFlt = numInt;

	//Explicit Conversion

	double numDbl = 654.345;
	int numIntdbl = numDbl; // Cast to int

	numIntdbl = static_cast<int>(numDbl); // Modern C++ way

	std::cout << numIntdbl << std::endl;
}