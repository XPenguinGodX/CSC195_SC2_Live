#include "Sandwich.h"
#include <iostream>

void Sandwich::setPrice(float value) {
	price = value;
}

void Sandwich::PrintPrice() {
	std::cout << "The price of the sandwich is: $" << price << std::endl;
}
