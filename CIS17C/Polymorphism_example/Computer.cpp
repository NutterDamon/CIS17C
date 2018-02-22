#include "Computer.h"
#include <iostream>
Computer::Computer() {
	id = "";
	cost = 0.0;
}
Computer::Computer(std::string id, float cost) {
	this->id = id;
	this->cost = cost;
}
Computer::~Computer() {

}
float Computer::calcPrice() {
	return cost * 1.5;
}
void Computer::display() {
	std::cout << "ID:\t" << id << std::endl
		<< "Cost:\t" << cost << std::endl;
}