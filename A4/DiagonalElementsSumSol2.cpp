#include <iostream>
using namespace std;

int main() {

    // Global Variable
    int sum = 0;

    // Matrix Declration
    int matrix[4][4] = {
        {1, 2, 3, 8}, 
		{4, 5, 6, 9}, 
		{7, 8, 9, 1}, 
		{7, 6, 3, 4} 
    };

    // Diagonal Sum
    for(int i = 0; i < 4; i++) {
        for(int k = 0; k < 4; k++) {
            if(i == k) {
                sum += matrix[i][k];
            }
            if(i+k == 3) {
                sum += matrix[i][k];
            }
        }
    }

    // Print Output
    cout << "The Sum of all the Diagonal Elements of the Matrix is " << sum << endl;

}