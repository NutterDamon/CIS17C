#ifndef BIRD_H
#define BIRD_H
#include "Animal.h"
class Bird : public Animal {
public:
	Bird(string name, double weight, string featherColor) 
		: Animal(name, weight){
		this->featherColor = featherColor;
	}
	~Bird() {}
	void showAnimal() {
		cout << "Birds are vertebrates in the Aves class." << endl;
		cout << "This " << name << " has " << featherColor
			<< " feathers and weighs " << weight << " pounds." << endl;

	}
private:
	string featherColor;
	
};
#endif