#ifndef LAPTOP_H
#define LAPTOP_H
#include "Computer.h"

class Laptop : public Computer {
public:
	Laptop();
	Laptop(std::string id, float cost, int batterylife);
	~Laptop();
	float calcPrice();
	float batteryLife;
	void display();
};
#endif