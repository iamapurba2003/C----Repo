#include <iostream>
using namespace std;


// Declearing Static Variables
static int count_c; static int count_d;

class Count {

    public: // Access Specifier
        Count() {
            count_c += 1;
        }
        ~ Count() {
            count_d += 1;
        }
        friend void result();

};

void result() {
    cout << "Number of Objects Created ~ " << count_c << endl;
    cout << "Number of Objects Destroyed ~ " << count_d << endl;
}

int main() {

    // Declearing Objects
    Count C;
    C.~Count(); // Explicitely Calling Destructors to destroy the object immediately
    Count C1;
    C1.~Count();
    Count C2;
    C2.~Count();
    Count C3;
    C3.~Count();
    Count C4;
    C4.~Count();

    // Calling friend function 
    result();

    return 0;

}