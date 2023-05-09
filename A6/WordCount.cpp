#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // Global Variable Declaration
    char Phrase[38] = "Tom Harry and Dick are good friends!";
    // char Phrase[38];
    int Count = 1; // Keeps track of the number of Words, Starts from 1 as Number of Words = No. of Spaces + 1, 
    // -1(if Unnecessary Space is Present at the end)
    
    // User Prompt
    // cout << "Enter a String (max 37 Charecters)? ";
    // cin >> Phrase;
    // cout << endl;


    for(int i = 0; i < sizeof Phrase - 1; i++) {
        if(Phrase[i] == ' ') {
            Count++;
        } else {
            Count = Count;
        }
    }

    // Checks if an empty unnecessary space is present at the lst of the String, then decreases the count by 1 
    if(Phrase[sizeof Phrase - 2] == ' ') {
        Count -= 1;
    }

    cout << "The number of words in the String (" << Phrase << ") is " << Count << endl;


    return 0;
}