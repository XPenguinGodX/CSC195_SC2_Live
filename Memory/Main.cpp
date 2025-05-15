#include <iostream>
using namespace std;

void set(int& i) 
{
	i = 123;
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;

}

void swapper(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}


int main()
{
	int i1 = 10;
	int i2 = 20;

	int& r = i1; // & creates a reference to i1, so r is an alias for i1

	//r = 30; // r is a reference to i1, so this changes i1 to 30

	//set(i1);

	int* p = nullptr;
	p = &i2; // p is a pointer to i2

	swapper(&i1, &i2); // This will not swap the values of i1 and i2

	cout << "i1: " << i1 << endl;
	cout << "i2: " << i2 << endl;
	cout << "Value p: " << p << endl;
	cout << "dereferenced p: " << *p << endl;


}
