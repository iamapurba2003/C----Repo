#include <iostream>
using namespace std;

int main() {

    // Array Decleration
    int array[10];

    int size;

    // User Prompt 
    cout << "Enter the Size of Array ( Max 10 )? ";
    cin >> size;
    cout << endl;

    // Data Insertion
    for(int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int PASS = (size-1);
    int COMP = (size-1);


    // Sorting in Progress...
    for(int i = 0; i < PASS; i++) {
        for(int j = 0; j < COMP; j++) {
            if(array[j] > array[j+1]) {
                int temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
        COMP -= 1;
    }

    cout << "The Sorted Array is [";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "]";
    cout << endl;



}