#include <iostream>
using namespace std;


void UpperHalfDiagonal(int (*Array)[5], int Row, int Column) {
    // Keeps track of the Row and decreases by One Count (Diagonal of Array)
    int Diagonal = Row;
    int index = 0; // Keeps track of the index from which Printing of elements begin in each Row.
    int Spaces = 0; // Keeps track of the Spaces for Printing of Inversed Pyramid
    
    cout << "The Upper Half i.e Diagonal Shape of the Array is, " << "\n\n";
    // Diagonal Segmentation
    for(int i = 0; i < Row; i++) {
    
        // Prints the Spaces
        for(int j = 0; j < Spaces; j++) {
            cout << "  ";
        }

        // Prints the Numbers
        for(int k = 0; k < Diagonal; k++) {
            cout << Array[i][index] << " ";
            index += 1;
        }
        cout << endl;
        Diagonal -= 1;
        index = i+1;
        Spaces += 1;
    }

}


int main() {
    int matrix[5][5] = {
        {2, 3, 1, 5, 0},
        {7, 1, 5, 3, 1},
        {2, 5, 7, 8, 1},
        {0, 1, 5, 0, 1},
        {3, 4, 9, 1, 5}
    };

    // fucntion Calling
    UpperHalfDiagonal(matrix, 5, 5);


    return 0;
}