//#include <iostream>
//using namespace std;
//
//int main() {
//    int matrix[4][4] = {
//            {1, 2, 3, 4},
//            {5, 6, 7, 8},
//            {9, 1, 2, 3},
//            {4, 5, 6, 7}
//    };
//    int leftDiagonalArray[4], rightDiagonalArray[4];
//    int DiagonalSum = 0;
//
//
//    //Display Data
//    for(int i = 0; i < 4; i++) {
//        for(int j = 0; j < 4; j++) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//    cout << endl;
//
//    // Diagonal Sum
//    for(int i = 0; i < 4; i++) {
//        for(int j = 0; j < 4; j++) {
//            if ( i == j) {
//                leftDiagonalArray[i] = matrix[i][j];
//                DiagonalSum += matrix[i][j];
//            }
//            else if (i+j == 3) {
//                rightDiagonalArray[i] = matrix[i][j];
//                DiagonalSum += matrix[i][j];
//            }
//        }
//    }
//
//    // Left Diagonal Elems
//    cout << "Left Diagonal" << endl;
//    for(int j = 0; j < 4; j++) {
//        cout << leftDiagonalArray[j] << " ";
//    }
//    cout << "\n\n";
//
//    cout << "Right Diagonal" << endl;
//    for(int k = 0; k < 4; k++) {
//        cout << rightDiagonalArray[k] << " ";
//    }
//    cout << "\n\n";
//
//    cout << " ------ Diagonal Sum ------" << endl;
//    cout << DiagonalSum << endl;
//
//
//    return 0;
//}

#include <iostream>
using namespace std;

int main() {
    // Array Decleration
    int array[5] = {10, 43, 75, 25, 16};

    // Get the length of the Array

    int PASS = 5;
    int COMP = 4;

    // Sorting in Progress...
    for(int i = 0; i < PASS; i++) {
        for(int j = 0; j <= COMP; j++) {
            if(array[j] < array[j+1]) {
                continue;
            } else {
                int temp = array[j];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
        COMP -= 1;
    }

    cout << "The Sorted Array is [";
    for(int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << "]";
    cout << endl;



}