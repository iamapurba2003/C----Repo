#include <iostream>
using namespace std;

int main() {


    // Global Variables
    int row = 0;
    int column = 0;

    // Matrix Declaration
    int matrixA[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int matrixB[3][2] = {
        {5, 6},
        {1, 8},
        {7, 4}
    };

    // Multiplication of Matrix
    cout << "[ " << endl;
    for(int i = 0; i < 3; i++) {
        cout << "\t[ ";
        for(int k = 0; k < 3; k++) {
            cout << matrixB[i][column] * matrixA[row][k] + matrixB[i][column+1] * matrixA[row+1][k] << " ";
        }
        cout << "]" << endl;
    } 
    cout << "]" << endl;


    return 0;
}
