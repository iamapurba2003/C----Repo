#include <iostream>
using namespace std;

// Now let's see an intro to inline functions and Outline functions
// At first we will have a regular class and two class members and two class methods 

class A {
    int a, b;

    public:
        void input(int x, int y) {
            a = x, b = y;
        }

        void display() {
            cout << "x ~ " << a << "\nY ~ " << b << endl;
        }

};

int main() {

    // Creating Objects of the Class A
    A obj;
    obj.input(10, 20);
    obj.display();


    return 0;
}