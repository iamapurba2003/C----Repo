#include <iostream>
using namespace std;

void MergeArray(int a1[], int a2[], int a3[]) {
    // Pointer Reference to Base Address of arr & arr2 in main()
    int *p = &a1[0];
    int *q = &a2[3]; // Referencing the Adress of last element for Reverse Travarsal

    // Merging the Values of First Array
    for(int i = 0; i < 4; i++) {
        a3[i] = *(p++);
    }

    // Merging the Values of Second Array
    for(int i = 4; i < 8; i++) {
        a3[i] = *(q--);
    }
}


int main() {
    // Global Variable Declaration
    int arr[4] = {1, 2, 3, 4};
    int arr2[4] = {8, 7, 6, 5};
    int arr3[8];


    // function call and Passing Arrays into it
    MergeArray(arr, arr2, arr3);

    // Displaying Array
    cout << "[ ";
    for(int i = 0; i < 8; i++) {
        cout << arr3[i] << ", ";
    }
    cout << "]";
    cout << endl;

    return 0;
}