#include "Sculpture.h"

Sculpture::Sculpture(string id, string title, string artist, string genre, int year, double price, string material)
	: Art(id, title, artist, genre, year, price) {
	this->material = material;
}
Sculpture::~Sculpture() {}
void Sculpture::showArt() {
	cout << "ID: \t\t" << id << endl;
	cout << "Title: \t\t" << title << endl;
	cout << "Artist: \t" << artist << endl;
	cout << "Material: \t" << material << endl;
	cout << "Genre: \t\t" << genre << endl;
	cout << "Year: \t\t" << year << endl;
	cout << "Price: \t\t" << price << endl;
}