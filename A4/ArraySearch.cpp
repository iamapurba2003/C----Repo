#include <iostream>
using namespace std;

int main() {
    
    // Global Variable
    int search;
    int flag = 0;

    // Array Declaration
    int array[5] = {34, 5, 6, 2, 78};
    
    // User Prompt
    cout << "Enter the Element to be Searched? ";
    cin >> search;
    cout << endl;

    // Searching in Progress...
    for(int i = 0; i < 5; i++) {
        if(array[i] == search) {
            cout << "Element found at index " << i << endl;
            flag = 1;
            break;
        } 
    }

    if(flag == 0) {
        cout << "Element not found" << endl;
    }

}