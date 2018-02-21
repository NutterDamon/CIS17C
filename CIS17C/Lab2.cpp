#include <iostream>

using namespace std;
const int ROWS = 2;
const int COLS = 3;
const int SIZE = 6;
void showNumbers(int numbers[][COLS], int size);
int getNumbers(int numbers[][COLS], int size);

int main() {
	int numbers[ROWS][COLS];

	cout << "Enter values." << endl;
	getNumbers(numbers, SIZE);
	cout << "Values." << endl;
	showNumbers(numbers, SIZE);
	system("pause");
	return 0;
}

void showNumbers(int numbers[][COLS], int size) {
	int counter = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << "Element " << counter << ": ";
			cout << numbers[i][j] << endl;
			counter++;
		}
		cout << endl;
	}
}
int getNumbers(int numbers[][COLS], int size) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cin >> numbers[i][j];
		}
	}
	return numbers[ROWS][COLS];
}