#include <iostream>
#include "PC.h"
#include "Laptop.h"

void showRetailPrice(Computer& computer);

int main() {
	PC pc("11111", 1000);
	Laptop laptop("22222", 12000, 7);

	std::cout << "PC:\n";
	pc.display();
	std::cout << "Laptop:\n";
	laptop.display();

	std::cout << "\n\nPC:\n";
	showRetailPrice(pc);

	std::cout << "\n\nLaptop:\n";
	showRetailPrice(laptop);

	system("pause");
	return 0;
}

void showRetailPrice(Computer& computer) {
	std::cout << "Price:\t" << computer.calcPrice() << std::endl << std::endl;
}