#include <iostream>
using namespace std;

// It is an implicit Pointer which when is Passed as a reference when an Object is Created and Value if Passed in Constructor or any method is Called on.

// Let's look at an Example
class A {

    int a, b;
    public: // Access Specifier
        A(int a, int b) { // Constructor 
            this->a = a; // It is explicitely refering to current object which references the data member a.
            this->b = b;
        } 
        void display() {
            cout << a << b << endl;
            // or
            cout << this->a << this->b << endl; // Points to the Current Object which is referencing the data members.
        }

};

int main() {
    A O(10, 20);
    O.display();
}