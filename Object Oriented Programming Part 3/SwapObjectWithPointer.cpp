#include <iostream>
using namespace std;

//? Now, we will see Object Swap using pointers
//    O1         O2
//  10, 20     40, 50    
//? After Swapping
//    O1         O2
//  40, 50     10, 20

//? Let's perform the abve operation using Pointer

class A {

    // Declearing Data Members
    int a;
    float b;

    public: // Access Specifier
        A(int x = 0, float y = 0) {
            this->a = x, this->b = y;
        }
        void display() {
            cout << "A: " << a << "\nB: " << b << "\n\n"; 
        }
        void _Swap(A* p) {
            A temp;

            // Need to understand the mechanism of this pointer in for loop just like in the Sum Of Objects using Pointer Program
            for(int i = 0; i < 2; i++) {
                temp.a = this->a;
                temp.b = this->b;
                this->a = p->a;
                this->b = p->b;
                p->a = temp.a;
                p->b = temp.b;
                p++;
            }

        }

};


int main() {

    // Declearing Objects
    A O[2] = {A(10, 20), A(40, 50)};

    // Before Swapping
    cout << "Before Swapping ~ " << endl;
    for(int i = 0; i < 2; i++) {
        O[i].display();
    }

    // After Swapping
    O[0]._Swap(O);

    // Displaying After Swapping
    cout << "After Swapping ~ " << endl;
    for(int i = 0; i < 2; i++) {
        O[i].display();
    }

    return 0;

}