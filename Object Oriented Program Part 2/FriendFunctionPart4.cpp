#include <iostream>
using namespace std;

//? Scenario 4 :- Now let's see a scenario where we have a class A which is a friend of class B

class B {

    // Declearing Data Members
    int x;
    public: // Access Specifier
        B(int y) {
            this->x = y;
        }
    friend class A;

};

class A {

    // Declearing Data Members
    int a, b;
    public: // Access Specifier
        A(int x, int y) {
            this-> a = x, this->b = y;
        }
        void display(B O) {
            cout << "Data Memebers of Class A ~ \n" << "A = " << this->a << "\t B = " << this->b << endl;
            cout << "Data Memebers of Class B ~ \n" << "X = " << O.x << endl;
        }

};

// // Defining + Intializing class B
// class B {

//     // Declearing Data Members
//     int x;
//     public: // Access Specifier
//         B(int y) {
//             this->x = y;
//         }
//     friend class A;

// };


int main() {

    // Declearing Objects
    A O(10, 200);
    B O2(350);

    O.display(O2); // Access display from class A Object and Passing Object of class B and sccessing it's data member from class A  
}


//! Error -: While class B is defined after A, the display function in A complains ob Parameter of type B which says Incomple Type B.

//! Error2 -: While clas B is decleared first and then A, no error comes while referencing A even though it's neither decleared now forward decleared

