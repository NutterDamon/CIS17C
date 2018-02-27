#include "Painting.h"
#include "Sculpture.h"
int main() {
	Painting a1("12345", "The Kiss", "Gustav Klimt", "Symbolist", 1908, 2500, "Oil");
	Sculpture a2("54321", "The Thinker", "Rodin", "Impressionism", 1880, 2000, "Bronze");

	a1.showArt();
	cout << endl;
	a2.showArt();
	system("pause");
	return 0;
}

/*	OUTPUT:
ID:             12345
Title:          The Kiss
Artist:         Gustav Klimt
Paint Medium:   Oil
Genre:          Symbolist
Year:           1908
Price:          2500

ID:             54321
Title:          The Thinker
Artist:         Rodin
Material:       Bronze
Genre:          Impressionism
Year:           1880
Price:          2000
Press any key to continue . . .

*/