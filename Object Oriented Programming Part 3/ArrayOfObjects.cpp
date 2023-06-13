#include <iostream>
using namespace std;

//? When I have an Array containing pool of objects it is known as Array of Objects.
//? Consider a Class A of data members x & y. If we have an array of Objects of class A;
//*             4b  4b  4b  4b  4b  4b    ==> Size of each data member(int) of an Object in the Array
//* A O[3]c = { (x, y), (x, y), (x, y) }
//*             100     108     116    ==> Memory Location (contagious)


//? Lets see it's usage in action
class A {

    // Declearing Data Members
    int a, b;

    public: // Access Speicifier
        void input(int x, int y) {
            this->a = x, this->b = y;
        } 
        void display() {
            cout << "A: " << a << "\nB: " << b << endl;
        }

};


int main() {

    // Declearing Array of Objects 
    A O[3]; // Array of type A with max_length of 3
    int x, y; // Stores input given from user

    // Passing Values from Objects
    for(int i = 0; i < 3; i++) {
        cin >> x >> y;
        O[i].input(x, y);
    }

    // Displatying Values using objects
    for(int i = 0; i < 3; i++) {
        O[i].display();
    }

    return 0;
    
}