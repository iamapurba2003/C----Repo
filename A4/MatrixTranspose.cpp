#include <iostream>
using namespace std;

int main() {

    // Matrix Declaration
    int matrix[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };

    int matrixT[4][2];

    // Transposing Matrix
    for(int i = 0; i < 4; i++) {
        for(int k = 0; k < 2; k++) {
            matrixT[i][k] = matrix[k][i];
        }
    } 

    // Matrix Display
    cout << "[ ";
    for(int i = 0; i < 4; i++) {
        cout << "\t[ ";
        for(int k = 0; k < 2; k++) {
            cout << matrixT[i][k] << " ";
        }
        cout << "]" << endl;
    }
    cout << "]" << endl;
}