#ifndef PAINTING_H
#define PAINTING_H
#include "Art.h"

class Painting : public Art {
public:
	Painting(string id, string title, string artist, string genre, int year, double price, string paintMedium);
	~Painting();
	void showArt();
private:
	string paintMedium;
};

#endif
