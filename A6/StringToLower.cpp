#include <iostream>
#include <cstring>
using namespace std;


int getRange(int number) {
    int track = 0;
    for(int i = 65; i <= 90; i++) {
        if(i == number) {
            track = i;
            return track;
        } 
    }
    return 0;

}


int main() {

    // Global Variable Declaration
    char SampleString[13] = "Apurba Ghosh";
    for(int k = 0; k < strlen(SampleString); k++) {
        int result = getRange((int) SampleString[k]);
        if(result == 0) {
            SampleString[k] = SampleString[k];
        } else {
            int difference = result - 65;
            int lowerASCII = 97 + difference;
            char c = lowerASCII;
            SampleString[k] = c;
        }
    }

    cout << "The Lowered String is " << SampleString << endl;

    return 0;
}