#include "Painting.h"

Painting::Painting(string id, string title, string artist, string genre, int year, double price, string paintMedium) 
	: Art(id, title, artist, genre, year, price){
	this->paintMedium= paintMedium;
}
Painting::~Painting() {}
void Painting::showArt() {
	cout << "ID: \t\t" << id << endl;
	cout << "Title: \t\t" << title << endl;
	cout << "Artist: \t" << artist << endl;
	cout << "Paint Medium: \t" << paintMedium << endl;
	cout << "Genre: \t\t" << genre << endl;
	cout << "Year: \t\t" << year << endl;
	cout << "Price: \t\t" << price << endl;
}