#ifndef SCULPTURE_H
#define SCULPTURE_H
#include "Art.h"

class Sculpture : public Art {
public:
	Sculpture(string id, string title, string artist, string genre, int year, double price, string material);
	~Sculpture();
	void showArt();
private: 
	string material;
};

#endif