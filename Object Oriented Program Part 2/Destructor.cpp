#include <iostream>
using namespace std;

//? It is implicitely called constructor like method which is solely responsible for destroying object of the class when it's work is done.

// Let's look at an example
class A {

    int a, b;
    public: // Access Specifier
        A(int x, int y) {
            this->a = x, this->b = y;
        }
        
        // Just like the Constructor the Destructor is Implicit and is Called Automatically
        ~ A() { // ( ~ ) -> This Sign in necessary to mention a it as a Destructor 
            cout << "Destroying Object at location " << this << endl;
        }

};


int main() {

    // Declearing Objects
    A O(10, 20);

    return 0;
}