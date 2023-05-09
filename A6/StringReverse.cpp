#include <iostream>
#include <cstring>
using namespace std;

int main() {

    // Global Variable Declaration
    char SampleString[13] = "Apurba Ghosh";
    int mid = strlen(SampleString) / 2;
    int n_idx = strlen(SampleString) - 1;

    // Swapping Positions using indexes to reverse the Charecter Array
    cout << "The String Before reversal is " << SampleString << endl;
    for(int i = 0; i < mid; i++) {
        int temp = SampleString[i];
        SampleString[i] = SampleString[n_idx];
        SampleString[n_idx] = temp;
        n_idx--;
    }
    cout << "The New String After reversal is " << SampleString << endl;


    return 0;
}