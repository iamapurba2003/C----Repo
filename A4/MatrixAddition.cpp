#include <iostream>
using namespace std;

int main() {

    // Matrix Declaration
    int matrixA[4][4] = {
        {8, 9, 3, 2},
        {7, 6, 4, 1},
        {5, 3, 2, 4},
        {7, 3, 2, 6}
    };

    int matrixB[4][4] = {
        {9, 4, 5, 1},
        {4, 5, 3, 8},
        {8, 3, 5, 2},
        {1, 6, 8, 2}
    };

    // Addtion of Matrix
    cout << "[";
    for(int i = 0; i < 4; i++) {
        cout << "\t[ ";
        for(int j = 0; j < 4; j++) {
            cout << matrixA[i][j] + matrixB[i][j] << " ";
        }
        cout << "]" << endl;
    }
    cout << "]\n";

    return 0;
}