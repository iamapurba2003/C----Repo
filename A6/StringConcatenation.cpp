#include <iostream>
#include <cstring>
using namespace std;

int main() {

    // Global Varaible Declaration
    char StringOne[6] = "Harry"; // Used for the alternative way
    char StringOneCopy[13] = "Harry"; // Used for the first method
    char StringTwo[8] = " Potter"; // Common in both the method
    char StringThree[13]; // Used as a Third String Array for the alternative method
    int StartIndex = strlen(StringOneCopy); // To get the length of the Copy Array, to be used as a StartIndex for the same to inject the next String
    int index = 0; // Manages the Manual Index of the Second String Array for both the methods 

    // String Concatenation
    for(int i = StartIndex; i < StartIndex+8; i++) {
        StringOneCopy[i] = StringTwo[index];
        index++;
    }

    cout << "The New String is " << StringOneCopy << endl;

    // String Concatenation (alternative way)
    index = 0; // Re-setting the value of index to use it for the Same purpose as before.
    for(int i = 0; i < 13; i++) {
        if (i < sizeof StringOne - 1) { // Setting bounds for the first Charecter Array to be used 
            StringThree[i] = StringOne[i];
        } else {
            StringThree[i] = StringTwo[index]; // Using the Second Charecter Array to fill the third array once the first one hs filled it already.
            index++;
        }
    }

    cout << "The New String with using a Third String Array is " << StringThree << endl;

    return 0;
}