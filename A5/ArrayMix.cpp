#include <iostream>
using namespace std;

void MIX(int arr[], int arr2[], int arr3[]) {

    // Pointer Reference to the Base Address of the Arrays in main()
    int *p = &arr[0];
    int *q = &arr2[0];

    // Even Number & Odd Number injection into arr3 from arr1
    int n_idx = 12; // Keeping track of arr3 index from backwards
    int idx = 0; // Keeping track of arr3 index from front
    for(int i = 0; i < 6; i++) {
        int elem = *(p++); // Accessing each element through memory address contagiously from arr
        if(elem%2 == 0) {
            arr3[idx] = elem; 
            idx++; // increasing the index by 1 as we set one elem in current index for arr3
        } else if(elem%2 != 0) {
            arr3[n_idx] = elem;
            n_idx -= 1; // decreasing index by 1 as we set one elem in current index for arr3 from backwards
        }
    }

    // Even Number & Odd Number injection into arr3 from arr1
    int stop = idx+7; // Weird Bug, Placing it directly into Stop Condition in for loop doesen't exits the loop
    for(int i = idx; i < stop; i++) {
        int elems = *(q++); // Accesing elements using base address from arr2 contagiouly
        if(elems%2 == 0) {
            arr3[idx] = elems;
            idx++; // increasing index by 1 continuing from last index set in 1st for loop for arr3
    } else if(elems%2 != 0) {
            arr3[n_idx] = elems;
            n_idx -= 1; // decreasing index by 1 continuing from last index set in 1st loop for arr3
        }
    }



};




int main() {
    // Global Variable Declaration
    int array_a[6] = {3, 2, 1, 7, 6, 3};
    int array_b[7] = {9, 3, 5, 6, 2, 8, 10};
    int array_c[13]; // {2, 6, 6, 2, 8, 10, 5, 3, 9, 3, 7, 1, 3}

    // function Calling
    MIX(array_a, array_b, array_c);

    // Display Array
    cout << "[ ";
    for(int i = 0; i < 13; i++) {
        cout << array_c[i] << ", ";
    }
    cout << "]";
    cout << endl;

}