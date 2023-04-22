#include <iostream>
using namespace std;

int main() {

	// Matrix / Array Declaration 
	int matrix[4][4] = {
		{1, 2, 3, 8},
		{4, 5, 6, 9}, 
		{7, 8, 9, 1}, 
		{7, 6, 3, 4}  
	};

	// ld Keeps track of Left Diagonal elements in terms of a Linear Layout
	int ld = 0;
	// y keeps track of the RD elements
	int y = 4;

	// Interchanging Diagonals
	for(int i = 0; i < 4; i++) {
		int temp = matrix[i][ld/5];
		matrix[i][ld/5] = matrix[i][y-1];
		matrix[i][y-1] = temp;

		// Manupulation
		ld += 5;
		y -= 1;
	}

	// Matrix Print
	cout << "[ " << endl;
	for(int i = 0; i < 4; i++) {
		cout << "\t[ ";
		for(int j = 0; j < 4; j++) {
			cout << matrix[i][j] << ", ";
		}
		cout <<"]";
		cout << endl;
	}
	cout << "]";
	cout << endl;
}

