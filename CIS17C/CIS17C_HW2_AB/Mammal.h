#ifndef MAMMAL_H
#define MAMMAL_H
#include "Animal.h"
class Mammal : public Animal {
public:
	Mammal(string name, double weight, string hairColor)
		: Animal(name, weight) {
		this->hairColor = hairColor;
	}
	~Mammal() {}
	void showAnimal() {

		cout << "Mammals are vertebrates in the mammalia class." << endl;
		cout << "This " << hairColor << " dairy " << name << " weighs "
			<< weight << " pounds." << endl;
	}
private:
	string hairColor;
};
#endif