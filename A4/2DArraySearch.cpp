#include <iostream>
using namespace std;

int main() {

    // Global Variable
    int search;
    int flag = 0;

    // User Prompt
    cout << "Enter the element to be Searched? ";
    cin >> search;
    cout << endl;

    // Matrix Declaration
    int matrix[2][4] = {
        {2, 5, 7, 3},
        {78, 43, 56, 1}
    };

    // Searching in Progress...
    for(int i = 0; i < 2; i++) { // The Parent for loop is redundant, using a While loop as Parent is a better Option.
        for(int j = 0; j < 4; j++) {
            if(search == matrix[i][j]) {
                cout << "Element found at index (" << i << ", " << j << ")" << endl;
                flag = 1;
                break;
            }
            
        }
        if(flag == 1) {
            break;
        }
        
    }
    if(flag == 0) {
        cout << "Element not found in Array." << endl;
    }
}