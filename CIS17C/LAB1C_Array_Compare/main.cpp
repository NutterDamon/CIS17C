/*	Damon Nutter
Program tests if 2 arrays are equal.
*/

#include <iostream>
#include <string>
using namespace std;
const int ROWS = 2;
const int COLS = 3;
bool areEqual(int array1[][COLS], int array2[][COLS]);
void showResult(bool areEqual);
int main() {
	int numbers[ROWS][COLS] = { 7,4,6,9,2,1 };
	int values[ROWS][COLS] = { 7,4,6,9,2,1 };

	showResult(areEqual(numbers, values));
	system("pause");
}
bool areEqual(int array1[][COLS], int array2[][COLS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (array1[i][j] != array2[i][j]) {
				return false;
			}
		}
	}
	return true;
}
void showResult(bool areEqual) {
	if (areEqual) {
		cout << "They are equal" << endl;
	}
	else {
		cout << "They are not equal" << endl;
	}
}