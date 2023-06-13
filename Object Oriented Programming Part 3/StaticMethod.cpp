#include <iostream>
using namespace std;

//? Now, just like Static Data Members we have Static Methods which are Permanent to all Objects 
//? which is then shared to every object and a Single instance of the method is created which isn't
//? Object Specific.

//? Usage 

class A {

    // Declearing Data Members
    int a, b; // Specific to Obejct 
    static int c; // --> Permanent

    public: // Access Speicifier
        A(int x, int y) {
            this->a = x, this->b = y;
            c++;
        }
        static void modify(); // Declearing a Static Method
        void display() {
            cout << a << " " << b << " " << c << endl;
        }

};


//? Defining + Initializing Static Method
void A::modify() {
    c = 300;
}
int A::c = 100; // Initializing + Defining static member
 
int main() {

    // Creating Objects
    A o(100, 200);
    o.display();

    A o2(300, 400);
    o2.display();

    // Modifying the Value of c using modify static method
    A::modify();
    o.display();
    o2.display();


    return 0;

}

//! Limitations
//? A Static Method cannot access any non-static member or non-static method.
//? Any Non-static member or method can access both static and non-static member/method.
//? Static methods doesen't have any this pointer, whether you call it using object or using 
//? Scope resolution Operator.