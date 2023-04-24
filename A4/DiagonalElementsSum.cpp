#include <iostream>
using namespace std;

int main() {

    // Global Variables
    int sum = 0;
    int ld = 0;
    int rd = 3;

    // Matrix Declartion
    int matrix[4][4] = {
        {1, 2, 3, 8}, 
		{4, 5, 6, 9}, 
		{7, 8, 9, 1}, 
		{7, 6, 3, 4} 
    };

    // Sum of Diagonals
    for(int i = 0; i < 4; i++) {
        sum += matrix[i][ld] + matrix[i][rd];
        ld += 1;
        rd -= 1;
    }

    // Print Output
    cout << "The Sum of all the Diaginal Elements of the Matrix is " << sum << endl;

}