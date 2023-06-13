#include <iostream>
using namespace std;

//? Let's say I want to take two inputs as Parameter in Constuctor 

class A {

    // Declearing Data Members
    int a, b;

    public: // Access Specifier
        A(int x, int y) {
            this->a = x, this->b = y;
        }

        void display() {
            cout << "A: " << a << "\nB: " << b << endl << "\n";
        }

};


int main() {

    // Declearing Array of Objects
    A O[4] = {A(100, 200), A(300, 400), A(500, 600), A(700, 800)};

    // Displaying Obejects
    for(int i = 0; i < 4; i++) {
        O[i].display();
    }

    return 0;
}