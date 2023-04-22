#include <iostream>
using namespace std;

int main() {
    
    // Matrix Declaration
    int matrix[2][3] = {
        {1, 4, 5},
        {7, 3, 9}
    };

    // Reverse logic
    for(int i = 0; i < 1; i++) {
        for(int j = 0; j < 3; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i+1][j];
            matrix[i+1][j] = temp;
        }
    }

    // Display Matrix
    cout << "[ " << endl;
    for(int i = 0; i < 2; i++) {
        cout << "\t[ ";
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "]," << endl;
    }
    cout << "]" << endl;

}