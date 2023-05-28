#include <iostream>
using namespace std;

// Now let's see a Parameterized Constructor with default arguments 

class A {

    int a, b; // Members

    public: // Access Specifiers
        A(int x = 0, int y = 0) {
            a = x, b = y;
        }
        void display() {
            cout << "A ~ " << a << "\nB ~ " << b << endl;
            cout << "\n";
        }

};

int main() {
    A O1; // Not giving any Argument to a Constructor 
    A O2(100); // Giving only one Argument to the Constructor 
    A O3(300, 250); // Passing both the Argguments to the Constructor

    // Display
    O1.display();
    O2.display();
    O3.display();

    return 0;
}