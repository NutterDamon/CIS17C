#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
class Computer {
public:
	Computer();
	Computer(std::string id, float cost);
	~Computer();
	virtual float calcPrice(); // Must be virtual to get dynamic cost function
	void display();
protected:
	std::string id;
	float cost;
};
#endif