#include <iostream>
using namespace std;

//? A Pointer is a Variable which stores the address of the Variable passed to it. 
//? A Pointer to object is a Pointer Variable which stores the address of an Object of a Class.
//? The Pointer Variable can then access all the methods and Properties as if it was that object,
//? using the Arrow notation.

// O1(x, y), O2 --> Objects
// A *p = &O1; 
// p->x, p->y; // Accessing x & y data members using Pointer.

//? Usage 
class A {

    // Declearing Data Members
    int a;

    public: // Access Specifier
        A(int x = 0) {
            this->a = x;
        }
        void Sum(A *p) { // Taking Address of Second Object as Argument and storing it in Pointer
            A O; // Creating a Temp Object for Adding two Objects 
            O.a = this->a + p->a; // this access the property of the object which called it and p is the pointer to the Object passed on the function
            cout << "The Sum of " << this->a << " & " << p->a << " is " << O.a << endl;
        }

};


int main() {

    // Declearing Objects
    A O1(10), O2(30);

    // Adding Two Objects
    O1.Sum(&O2);


    return 0;

}