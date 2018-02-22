
#ifndef PC_H
#define PC_H

#include "Computer.h"

class PC : public Computer {
public:
	PC(std::string id, float cost);
	~PC();
};
#endif