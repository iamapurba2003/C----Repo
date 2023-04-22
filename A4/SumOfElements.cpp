#include <iostream>
using namespace std;
int main() {
    
    // Global Variables
    int sum = 0;
    
    // Array Declaration
    int array[5] = {1, 45, 6, 7, 34};

    // Calculating Sum of Elements
    for(int i = 0; i < 5; i++) {
        sum += array[i];
    }

    // Messege Printing
    cout << "The Sum of all the Elements in the Array is " << sum << endl;

    return 0;
}