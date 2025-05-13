#include <iostream>


enum Meat {
	Chicken,
	Prawns,
	Pastrami,
	Ham,
	Roast_Beef,
	Turkey,
	Salami
};

class Sandwich
{
public:
	std::string bread;
	bool isDelicious;
	Meat meat;

private:
	float price;

public:
	void setPrice(float p);
	void PrintPrice();
};