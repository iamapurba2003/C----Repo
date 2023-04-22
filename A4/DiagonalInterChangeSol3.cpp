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

	int y = 3;

	// Diagonal Interchange
	for(int i = 0; i < 4; i++) {
		int temp = matrix[i][i];
		matrix[i][i] = matrix[i][y];
		matrix[i][y] = temp;

		// Manupulation
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