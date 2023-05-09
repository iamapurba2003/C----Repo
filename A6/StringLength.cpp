#include <iostream>
#include <cstring>
using namespace std;

int main() {

    // Charectar Array
    char String[13] = "Apurba Ghosh";
    char Strings[2] = "A";

    // Keeps track of the length of the String
    int length = 0;

    // Getting the length of the String using library/function
    cout << "The length of the given String " << "'" << String << "' is " << strlen(String) << endl;

    // Getting the length of the String (alternative way)
    cout << "The length of the given String " << "'" << String << "' is " << (sizeof String - 1) << endl;

    // Getting the length of the String (2nd alternative way)
    cout << "The length of the given String " << "'" << String << "' is " << (sizeof String/sizeof String[0] - 1) << endl;

    // Getting the length of the String using a third Variable
    for(int i = 1; i < sizeof String; i++) {
        length++;
    }
    cout << "The length of the given String " << "'" << String << "' is " << length << endl;



    return 0;
}