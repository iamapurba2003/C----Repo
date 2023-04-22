#include <iostream>
using namespace std;

int main() {

    // Global Variable
    int length = 10;
    int len = 10;

    // Array Declaration
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Reverse logic
    for(int i = 0; i < len/2 ; i++) {
        int temp = array[i];
        array[i] = array[length-1];
        array[length-1] = temp;

        length--;
    }

    // Displaying the Array
    cout << "After Reversal [ ";
    for(int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << "]" << endl;
}