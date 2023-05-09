#include <iostream>
using namespace std;


void Display(int (*p)[6], int M, int N) {
    // Array Multiplication row-wise
    int mul = 1;
    for(int i = 0; i < M; i++) {
        for(int k = 0; k < N; k++) {
            mul *= p[i][k];
        }
        cout << "The Multiplication of Row " << i+1 << " is -> " << mul << endl;
        mul = 1;
    }

}


int main() {
    int matrix[4][6] = {
        {1, 2, 3, 4, 5, 6},
        {5, 7, 8, 4, 3, 1},
        {4, 3, 8, 9, 1, 2},
        {3, 6, 2, 5, 8, 9}
    };

    // function Calling
    cout << endl;
    Display(matrix, 4, 6);
    cout << endl;
    
    return 0;
}