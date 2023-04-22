#include <iostream>
using namespace std;

int main() {
    
    // Global Variable
    int sum = 0;

    // Matrix Declaration
    int matrix[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };

    // Sum of elements
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            sum += matrix[i][j];
        }        
    }

    // Messege Printing
    cout << "The Sum of all the elements present in 2D Array is ~ " << sum << endl;
}