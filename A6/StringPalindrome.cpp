#include <iostream>
#include <cstring>
using namespace std;


bool isPalindrome(char *str, int length) {
    char cpStr[length]; // Holds a Copy of the Original String. Used for Reversing it literally.
    strcpy(cpStr, str);
    int mid = strlen(str) / 2; // Holds the mid Point of the Charecter Array in length.
    int n_idx = strlen(str) - 1; // Tracks the index of the Original Array in Reverse Order.


    for(int i = 0; i < mid; i++) {
        int temp = cpStr[i]; 
        cpStr[i] = cpStr[n_idx]; // Swapping each indexes to reverse the Charecter Array.
        cpStr[n_idx] = temp;
        n_idx--; // Decreasing the Reverse index by 1.
    }

    if(strcmp(cpStr, str) == 0) { // Returning true/false based on Comparison
        return true;
    } else {
        return false;
    }

}

int main() {

    // Global Variable Declaraion
    char SampleString[13] = "racecar";
    bool result = isPalindrome(SampleString, strlen(SampleString));
    if(result == true) {
        cout << "The String (" << SampleString << ") is a Palindrome" << endl; // Declearing the result based on output received.
    } else {
        cout << "The String (" << SampleString << ") is not a Palindrome" << endl; 
    }

    return 0;
}