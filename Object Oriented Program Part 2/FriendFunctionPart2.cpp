#include <iostream>
using namespace std;

//? Now let's say we have a Scenario where we want to add Two Objects but of different Class

// class A -> a,b O3
//                =
// class B -> a,b O1
//                + Here the Sum will be the Friend Function which will act as a Bridge b/w two classes B & C and if needed A.
// class C -> a,b O2

class B; // Forward Declearation is necessary as Whichout declearing it referencing it i class A is impossible
class C; // Forward Declearation
class A {

    // Declearing Data Members
    int a, b;
    public: // Access Specifier
        A(int x, int y) {
            this->a = x, this->b = y;
        }
        friend C Sum(A O, B O2); // Declearing friend function which returns an Object of class C

};

// Defining + Initializing class B & C
class B {

    // Declearing Data Members
    int a, b;
    public: // Access Specifier
        B(int x, int y) {
            this->a = x;
            this->b =y;
        }
        friend C Sum(A O, B O2); // Declearing friend function which returns an Object of class C

};

class C {

    // Declearing Data Members
    int a, b;
    public: // Access Specifier
        C(int x, int y) {
            this->a = x, this->b = y;
        }
        friend C Sum(A O, B O2); // Declearing friend function which returns an Object of Class C

        void display() {
            cout << this->a << ", " << this->b << endl;
        }

};

C Sum(A O, B O2) {
    C O3(0, 0); // Initializing a Container Object of class C
    O3.a = O.a + O2.a; // Adding a of both classes and Storing it in a of O3 
    O3.b = O.b + O2.b; // Adding b of both classes and Stroing it in b of O3

    return O3; // Returning the Object O3 which contains addition of two objects of class A and B
};

int main() {

    // Declearing Objects 
    A O(10, 20);
    B O2(100, 200);
    C O3(0, 0);

    // Adding the Two Objects of class A and B
    O3 = Sum(O, O2);

    // Diplaying the Result
    cout << "Addition of Objects A & B is ~ \n";
    O3.display();
}




