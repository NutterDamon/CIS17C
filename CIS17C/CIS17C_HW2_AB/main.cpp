#include "Bird.h"
#include "Mammal.h"
int main() {
	Bird bird("pelican", 8.5, "gray");
	Mammal cow("cow", 500, "black and white");
	bird.showAnimal();
	cout << endl;
	cow.showAnimal();

	system("pause");
	return 0;
}

/*	OUTPUT
Birds are vertebrates in the Aves class.
This pelican has gray feathers and weighs 8.5 pounds.

Mammals are vertebrates in the mammalia class.
This black and white dairy cow weighs 500 pounds.
Press any key to continue . . .
*/