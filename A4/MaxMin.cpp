#include <iostream>
using namespace std;

int main() {

    // Array Declaration
    int array[5] = {8, 45, 6, 1, 34};

    // Global Variable
    int max = array[0];
    int min = array[0];
    int length = 5;

    // Max-Min Determination
    for(int i = 0; i < ((length/2)+1); i++) {
        if(max < array[i+1]) {
            max = array[i+1];
        } 
        if(min > array[i+1]) {
            min = array[i+1];
        }
    }

    // Print Output
    cout << "The largest element is ~ " << max << "\nThe smallest element is ~ " << min << endl;
}