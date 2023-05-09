#include <iostream>
using namespace std;


void MatrixDataInsertion(int (*arr)[4], int M, int N) {
    cout << "Enter the elements of Matrix(only Numbers)? ";
    for(int i = 0; i < M; i++) {
        for(int k = 0; k < N; k++) {
            cin >> arr[i][k];
        }
    }
}

void Display(int (*arr)[4], int M, int N) {
    // Dsiplay elements of 4x4 Matrix
    cout << "[ " << endl;
    for(int i = 0; i < M; i++) {
        cout << "\t[ ";
        for(int k = 0; k < N; k++) {
            cout << arr[i][k] << ", ";
        } 
        cout << "], ";
        cout << endl;
    }
    cout << "]";
    cout << endl;
}

void MatrixSumAll(int (*arr)[4], int M, int N) {
    // All elements Sum in Matrix
    int sum = 0;
    for(int i = 0; i < M; i++) {
        for(int k = 0; k < N; k++) {
            sum += arr[i][k];
        }
    }
    cout << "The Sum of all the elements of the Array is " << sum << endl;
    cout << endl;
}

void MatrixSumRow(int (*arr)[4], int M, int N) {
    cout << endl;
    int rowSum = 0;
    // Row-wise Sum of elements in Matrix
    for(int i = 0; i < M; i++) {
        rowSum = 0;
        for(int k = 0; k < N; k++) {
            rowSum += arr[i][k];
        }
        cout << "The Sum of all the elements of Row " << i+1 << " is -> " << rowSum << endl;
    }
}

void MatrixSumColumn(int (*arr)[4], int M, int N) {
    // Column-wise Sum of elements in Matrix
    int ColumnSum[4] = {0, 0, 0, 0};
    for(int i = 0; i < M; i++) {
        for(int k = 0; k < N; k++) {
            ColumnSum[k] = ColumnSum[k] + arr[i][k];
        }
    }
    // Dsiplay Column-wise Sum of elements in Matrix
    cout << endl;
    for(int i = 0; i < M; i++) {
        cout << "The Sum of all elements of Column " << i+1 << " is -> " << ColumnSum[i] << endl;
    }
}

void Transpose(int (*arr)[4], int M, int N, int Show) {
    // 0,0  1,0  2,0  3,0
    // 0,1  1,1  2,1  3,1
    // 0,2  1,2  2,2  3,2
    // 0,3  1,3  2,3  3,3
    for(int i = 0; i < M; i++) {
        for(int k = i; k < N; k++) {
            int temp = arr[i][k];
            arr[i][k] = arr[k][i];
            arr[k][i] = temp;
        }
    }

    // Dsiplay all elements of a 4x4 Matrix
    cout << endl;
    if(Show == 0) {
        cout << "The Transpose of the Matrix is, " << endl;
        Display(arr, M, N);
    } 
}

void Menu() {
    cout << "\n\n";
    cout << "A. To input elements into matrix of size m x n" << endl;
    cout << "B. To display elements of matrix of size m x n" << endl;
    cout << "C. Sum of all elements of matrix of size m x n" << endl;
    cout << "D. To display row-wise sum of matrix of size m x n" << endl;
    cout << "E. To display column-wise sum of matrix of size m x n" << endl;
    cout << "F. To create transpose of matrix B of size n x m" << endl;
    cout << "Q. Quit" << endl;
    cout << "\n\n";
}



int main() {

    // Global Variable Declaration 
    int array[4][4];
    char choice;

    // Start of Menu Driven Program
    while(choice != 'Q') {
        Menu();
        cout << "Enter Your Choice? ";
        cin >> choice;
        cout << endl;

        if(choice == 'A') {
            MatrixDataInsertion(array, 4, 4);
        } else if(choice == 'B') {
            Display(array, 4, 4);
        } else if(choice == 'C') {
            MatrixSumAll(array, 4, 4);
        } else if(choice == 'D') {
            Display(array, 4, 4);
            MatrixSumRow(array, 4, 4);
        } else if(choice == 'E') {
            Display(array, 4, 4);
            MatrixSumColumn(array, 4, 4);
        } else if(choice == 'F') {
            cout << "Before Transposing, " << endl;
            Display(array, 4, 4);
            Transpose(array, 4, 4, 0);
            Transpose(array, 4, 4, 1);
        } else if(choice == 'Q') {
            cout << "Thank You for Visiting, Bye!!" << endl;
        } else {
            cout << "You have entered a wrong input, Plase Choose an input from below!!" << endl;
        }
    }

}