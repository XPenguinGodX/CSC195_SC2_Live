#include <iostream>
#include <array> // STL array
#include <list> // STL list
using namespace std;

int main() 
{
	//using built-in array
	int number[5] = { 1, 2, 3, 4, 5 };

	cout << "Third element: " << number[2] << endl;
	cout << "Out of bound element: " << number[5] << endl; // Undefined behavior

	number[1] = 25;

	cout << "All elements: ";
	for (int i = 0; i < 5; i++)
	{
		cout << number[i] << " ";
	}
	cout << endl;

	int size = sizeof(number) / sizeof(int);

	cout << "First element: " << number << endl;

	//fixed length assigned at complie time
	//no built-in methods for common operations
	//fast access to elements, easy to set up

	//STL array
	cout << endl << "STL array" << endl;

	array<string, 4> animals = {"Mouse", "Tiger", "Snake", "Penguin"};

	cout << "Third element: " << animals[2] << endl;

	cout << "Size of array: " << animals.size() << endl;

	//iterating thru array with for each
	cout << "All elements: ";
	for (string animal : animals)
	{
		cout << animal << " ";
	}

	cout << endl;

	cout << "Out of bound element: " << animals[3] << endl;
	//fixed size with STL algorithm compatibility
	//can get out of bounds exception

	cout << endl << "STL List" << endl;

	list<float> height = {5.6f, 6.3f, 4.2f};
	
	cout << "Size of list: " << height.size() << endl;

	height.push_front(2.3f);
	height.push_back(7.8f);

	height.sort();
	cout << "All elements: ";
	for (float h : height)
	{
		cout << h << " ";
	}

	cout << endl;

	//resizeable container
	//helpful for frequent insertions and deletions
	//higher memory overhead(Pointer for each element)
	//works well iterators and STL compatibility


}
