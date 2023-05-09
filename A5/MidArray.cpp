#include <iostream>
using namespace std;


void MidArray(int (*Square)[7], int M) {
    
    // Calculating the Mid Point of the Array
    int mid = (M/2);
    int midIndex = 0; // Keeps track of the Mid Index for the Column

    // Displaying the Mid Column and Mid Row Based on the Mid Point
    for(int i = 0; i < 2; i++) {
        if(i == 0) {
            cout << "The Mid Row of the Square Matrix is, " << endl;
        } else {
            cout << "The Mid Column of the Square Matrix is, " << endl;
        }

        // Displaying the Mid Row/Column of the Matrix Based on the Mid Point
        cout << "[ ";
        for(int k = 0; k < M; k++) {
            if(i == 0) {
                cout << Square[mid][k] << ", ";
            } else {
                cout << Square[midIndex][mid] << ", ";
                midIndex++;
            }
        }
        cout << "]" << endl;;

    }
}


int main() {
    int Square[7][7] = {
        {7, 6, 4, 7, 3, 1, 9},
        {5, 7, 8, 2, 3, 5, 1},
        {9, 4, 1, 8, 4, 6, 7},
        {4, 3, 7, 8, 1, 5, 4},
        {9, 0, 1, 5, 6, 8, 9},
        {1, 4, 6, 8, 2, 5, 6},
        {0, 3, 4, 0, 1, 2, 7}
    };

    // fucntion Calling
    MidArray(Square, 7);

    return 0;
}