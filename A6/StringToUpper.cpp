#include <iostream>
#include <cstring>
using namespace std;


int getRange(int number) {
    int track = 0;
    for(int i = 97; i <= 122; i++) {
        if(i == number) {
            track = i;
            return track;
        }
    }
    return 0;
}


int main() {

    // Global Variable Declaration
    char SampleString[15] = "Anindita Ghosh";
    for(int k = 0; k < strlen(SampleString); k++) {
        int result = getRange((int) SampleString[k]);
        if(result == 0) {
            SampleString[k] = SampleString[k];
        } else {
            int difference = result - 97;
            char upperASCII = difference + 65;
            SampleString[k] = upperASCII;
        }
    }

    cout << "The Upper String is " << SampleString << endl;


    return 0;
}