#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // Global Variable Declaration
    char Sentence[17] = "Duck Duck Goose!";
    char reverseSentence[17] = "";

    // Reversing the String with the help of loop
    cout << "The Reverse of the String (" << Sentence << ") is ";
    for(int i = sizeof Sentence - 2; i >= 0; i--) {
        cout << Sentence[i];
    }
    cout << endl;


    // Reversing a String with the help of another Charecter Array
    for(int i = 0; i < sizeof Sentence - 1; i++) {
        reverseSentence[i] = Sentence[i];
    }

    // Displaying in Reverse Order
    cout << "The Reverse of the String (" << Sentence << ") is ";
    for(int i = sizeof reverseSentence - 2; i >= 0; i--) {
        cout << reverseSentence[i];
    }
    cout << endl;

    return 0;
}