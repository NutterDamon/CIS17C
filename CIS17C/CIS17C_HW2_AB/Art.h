
#ifndef ART_H
#define ART_H

#include <string>
#include <iostream>
using namespace std;

class Art {
public:
	Art(string id, string title, string artist, string genre, int year, double price);
	~Art();
	virtual void showArt() = 0;

protected:
	string id;
	string title;
	string artist;
	string genre;
	int year;
	double price;
};

#endif
