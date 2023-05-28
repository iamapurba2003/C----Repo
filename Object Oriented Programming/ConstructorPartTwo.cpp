#include <iostream>
using namespace std;


// Now let's make a Constructor which accepts arguments

class A {

    int a, b; // Members

    public: 
        A(int x, int y) { // Declearing Parameter for accepting Values
            a = x, b = y;
        }
        void display() {
            cout << "A ~ " << a << "\nB ~ " << b << endl;
            cout << "\n";
        }

};

int main() {

    // Variable Declearation
    int x, y;

    // User Prompt
    cout << "Enter the Value of A & B? ";
    cin >> x >> y;
    cout << endl;

    // Creating an Object
    A O1(x, y); // Passing Values to Constructor 
    O1.display();



    return 0;
}