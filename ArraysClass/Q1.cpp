//
// Created by Apurba Ghosh on 09/04/23.
//


#include <iostream>
using namespace std;

int main() {

    // Defining Global Variables
    int arr[30];
    int left, right, length = 0;

    // Getting the SIZE of Array
    cout << "Enter the Number of Elements to be inserted (MAX 30)? ";
    cin >> length;

    // Data insertion in Array
    cout << "Enter the Elements in the Array? -->" << endl;
    for (int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    // Before Reversal
    cout << endl;
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reversal
    left = 0;
    right = length-1;
    for(int i = 0; i < length/2; i++) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left += 1;
        right -= 1;
    }

    // After Reversal
    for(int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }

    return 0;

}
