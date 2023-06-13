#include <iostream>
using namespace std;

//? Now let's see how to swap two Objects using Reference instead of pointer
//? Now, we will see Object Swap using Reference
//    O1         O2
//  10, 20     40, 50    
//? After Swapping
//    O1         O2
//  40, 50     10, 20

//? Let's perform the abve operation using Reference

class A {

    // Declearing Data Members
    int a;
    float b;

    public: // Access Specifier
        A(int x = 0, int y = 0) {
            this->a = x, this->b = y;
        }
        void display() {
            cout << "A: " << a << "\nB: " << b << "\n\n";
        }
        void _Swap(A& p) {
            A Temp;
            
            //! Need to understand why loop isn't needed in this case
            Temp.a = this->a;
            Temp.b = this->b;
            this->a = p.a;
            this->b = p.b;
            p.a = Temp.a;
            p.b = Temp.b;

        }

};


int main() {

    // Declearing Array of Objects
    A O[2] = {A(100, 340), A(550, 360)};

    // Before Swapping
    cout << "Before Swapping ~ " << endl;
    for(int i = 0; i < 2; i++) {
        O[i].display();
    }

    // Swapping 
    O[0]._Swap(O[1]); //! Need to understand why needed to pass an element instead of the whole array.

    // After Swapping
    cout << "After Swapping ~ " << endl;
    for(int i = 0; i < 2; i++) {
        O[i].display();
    }


    return 0;

}
