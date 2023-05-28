#include <iostream>
using namespace std;

// Let's see how can we pass a Class Object to a Class Member Method/function 

class A {

    int a, b; // Members
    
    public: // Access Specifier
        A(int x, int y) {
            a = x, b = y;
        }
        void sum(A O3) {
            A O4(0, 0);
            O4.a = a + O3.a;
            O4.b = b + O3.b;

            cout << "A (O1 + O2) ~ " << O4.a << "\nB (O1 + O2) ~ " << O4.b << endl;
            cout << "\n";
        }

};

int main() {

    // Creating Objects 
    A O1(10, 230);
    A O2(20, 340);

    // Calling the Sum method on Object and Passing an Object
    O1.sum(O2);
}