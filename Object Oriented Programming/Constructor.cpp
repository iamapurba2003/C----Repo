#include <iostream>
using namespace std;

// A Constructor is a Special type of member function which doesen't have any return type.
// It has the same name as a Class.
// It may or may not have a Parameter.
// When an Object is created, the Constructor is automatically invoked.
// Constructor can be Overloaded.
// It must be decleared in public access specifier.

//? Types of Constructor 
// Default Constructor
// Non-Paremeterzed Constructor 
// Copy Constructor 
//      Shallow Copy
//      Deep Copy

//? Let's See how to decleare a Constructor 

class A {
    
    // Memebers 
    int a, b;

    public:
        A() { // Non-Parameterized Constructor function. It is invoked every time an Object is created for this class 
            cout << "Enter the Value of A? ";
            cin >> a >> b;
            cout << "\n";
        }

        void display() {
            cout << "A ~ " << a << "\nB ~ " << b << endl;
            cout << "\n";
        }

};

int main() {

    A O1;
    O1.display();



    return 0;
}






