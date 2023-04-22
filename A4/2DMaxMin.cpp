#include <iostream>
using namespace std;

int main() {
    
    // Matrix Declaration
    int matrix[2][2] = {
        {23, 54},
        {65, 34}
    };
    // Global Variable
    int max = matrix[0][0];
    int min = matrix[0][0];

    // Max-Min Determnation
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(max < matrix[i][j]) {
                max = matrix[i][j];
            }
            if(min > matrix[i][j]) {
                min = matrix[i][j];
            }
        }
    }

    // Print Output
    cout << "The largest element is ~ " << max << "\nThe Smallest element is ~ " << min << endl;
}