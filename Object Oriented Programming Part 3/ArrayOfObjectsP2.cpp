#include <iostream>
using namespace std;

//? Now let's see how we can have an Array of Objects while we have a Constructor in class

class A{

    // Declearing Data Memebers
    int a;
    float b;

    public: // Access Specifier
        A(int x) {
            this->a = x;
        }
        void display() {
            cout << this->a << endl;
        }

};


int main() {

    // Declearing Objects
    A O[5] = {10, 20, 30, 40, 50}; // Here each Value is an Object of the Class 
    //? The Above Syntax internally means this,
    A O2[4] = {A(100), A(200), A(300), A(400)};

    //! NOTE :~ If your constuctor takes single Values then you can use the Top Syntax but if
    //! it accepts more than One Value then you will have to use the Syntax below the Top one.

    for(int i = 0; i < 5; i++) {
        O[i].display();
    }

    return 0;

}

