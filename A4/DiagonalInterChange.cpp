#include <iostream>
using namespace std;

int main() {

	// Matrix / Array Declaration 
	int array[4][4] = {
		{1, 2, 3, 8}, 
		{4, 5, 6, 9}, 
		{7, 8, 9, 1}, 
		{7, 6, 3, 4}  
	};

	int row = 0;
	int column = 0;

	// Interchanging Diagonals
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			if(i == j) {
				row = j;
			}
			if (i+j == 3) {
				column = j;
			}
		}
		int temp = array[i][row];
		array[i][row] = array[i][column];
		array[i][column] = temp;
	};

	// Matrix Print
	cout << "[ " << endl;
	for(int i = 0; i < 4; i++) {
		cout << "\t[ ";
		for(int j = 0; j < 4; j++) {
			cout << array[i][j] << ", ";
		}
		cout <<"]";
		cout << endl;
	}
	cout << "]";
	cout << endl;
}

