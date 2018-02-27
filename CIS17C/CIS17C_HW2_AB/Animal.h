#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>
using namespace std;
class Animal {
public: 
	Animal(string name, double weight) {
		this->name = name;
		this->weight = weight;
	}
	~Animal() {}

protected:
	string name;
	double weight;
};
#endif