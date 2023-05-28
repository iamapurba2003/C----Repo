#include <iostream>
using namespace std;

// Now, let's create a class with two members and two methods input and Sum and make one inline and other outline

class A {
    int a, b;

    public: // Public Access Specifier
        void input(int x, int y); // function declearation 
        void sum();

};

// An outline function is such that it creates a Seperate Stack in memory for function execution other than the 
// main execution stack
void A::input(int x, int y) { // fucntion definition using Scope Resolution Operator
    a = x, b = y;
};

//! NOTE: Declearing an inline keyword doesen't gurantee it's inline property, it will convert to
//! inline only if it possible like if it isn't a recursive function in which case it won't 
inline void A::sum() { // Here the Sum function is an inline method 
    cout << "A+B = " << (a+b) << endl;
    cout << "\n";
};

int main() {

    // Creating an Object
    A u1;
    u1.input(10, 20);
    //? An inline method is such that it doesen't require any extra stack in the memory for function execution other 
    //? than the original process memory, it just replaces the code of the functio where it is called.
    u1.sum();

    // Creating another Object
    A u2;
    u2.input(100, 340);
    u2.sum();



    return 0;
}