#include "Laptop.h"
#include <iostream>
Laptop::Laptop() {

}
Laptop::Laptop(std::string id, float cost, int batteryLife) : Computer(id, cost){
	this->batteryLife = batteryLife;
}
Laptop::~Laptop() {

}
float Laptop::calcPrice() {
	return cost * 1.7;
}
void Laptop::display() {
	Computer::display();
	std::cout << "Battery life:\t" << batteryLife << std::endl;
}