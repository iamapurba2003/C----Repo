#include <iostream>
using namespace std;

//? Definition ~ It is a Permanent Storage. Only one copy will be created hence all the memebers
//? will access the Same Copy of the Data Member

// Default Value is Zero
// It's lifetime is throughout the Program
// It is created before any object is created. While non-static object is created while object si created
// Hence it is also called Class Variable.

//* Since, for Static Data members we can access it without using an Object which violates the idea
//* of encapsulation, thus C++ is called a Partially Object Oriented language.

//! NOTE :~ To access Static Data members we can use either object or Scope Resolution Operator 
//! But to access Non-Static Data members we need to use object and nothing else.

//? Usage 
class A {

    // Declearing Data Members
    int a, b; // Specific to Object
    static int c; // --> Permanent

    public: // Access Specifier
        static int z; // Making a Static Data Member Public
        A(int x, int y) {
            this->a = x, this->b = y;
            c++;
        }
        void display() {
            cout << a << "-" << b << " " << c << endl; // We can access static-data memebers with non-static methods
        }

};

//? Now We have decleared a Static Data Memeber. But since we know that Static Members doesen't
//? get created ob Object creation. So we will have to manually initialize and define it 
int A::c = 100; // Giving Value is Optional

int main() {

    // Declearing Objects
    A obj(100, 200);
    obj.display();

    A obj2(300, 400);
    obj2.display();

    //? Since Static Data Member z is public we can access it like this,
    // A::z = 1000;


    return 0;

}