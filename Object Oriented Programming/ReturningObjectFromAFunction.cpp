#include <iostream>
using namespace std;

// Now, we will define the class and members and methods in same way but this time after adding two objects
// we will return the whole Object

class A {

    int a, b; // Members

    public: // Access Specifier
        A(int x, int y) { // Initializing Parameterized Constructor 
            a = x, b = y;
        }

        A sum(A O) { // Initializing a Sum Method of return type A, returns the Object which stores addition of two objects of the class 
            A O4(0, 0);
            O4.a = a + O.a;
            O4.b = b + O.b;

            return O4;
        }

        void display() { // Displaying the Value of A and B based on the Object who calls it
            cout << "O4 A(O1 + O2) ~ " << a << "\nO4 B(O1 + O2) ~ " << b << endl;
            cout << "\n";
        }

};

int main() {

    // Declearing Objects
    A O1(90, 347);
    A O2(45, 670);
    A O3(0, 0);

    // Calling the Sum method and displaying it 
    O3 = O1.sum(O2);
    O3.display();

}