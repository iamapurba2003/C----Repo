#include <iostream>
#include <cstring>
using namespace std;

int main() {

    // Global Variable Declaration
    char StringOne[13] = "Harry Potter";
    char StringTwo[14] = "Harry  Potter";
    bool flag = true; // Holds if the String is Equl of not. By default, yes!

    // Comparing Two Strings
    if(strcmp(StringOne, StringTwo) == 0) {
        cout << "Both the Strings are exactly the Same." << endl;
    }else {
        cout << "Both the Strings are not Same to each other." << endl;
    }


    // Comapre Two Strings (alternative way)
    if(strlen(StringOne) != strlen(StringTwo)) {
        flag = false; // If both the Strings are different in lengths, then obviously ther aren't same.
    } else {
        for(int i = 0; i < strlen(StringOne); i++) {
            if(StringOne[i] == StringTwo[i]) {
                flag = flag;
            } else {
                flag = false; // If One Charecter in one Charecter Array doesen'r matches with the Other, then Game Over!
                break;
            }
        }
    }

    // Declearing the Result
    if(flag != true) {
        cout << "The Strings are not Same to each other." << endl;
    } else {
        cout << "The Strings are exactly the Same to each other." << endl;
    }

    


    return 0;
}