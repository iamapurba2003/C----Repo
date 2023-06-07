#include <iostream>
using namespace std;

class A {

    // Declearing Data Members
    int a, b;
    
    public: // Access Specifier
        A(int a, int b) {
            this->a = a, this-> b = b;
        }
        friend class Sum;

};

class Sum {

    public: // Access Specifier
        void result(A O) {
            cout << "The Sum of " << O.a << " & " << O.b << " is " << O.a + O.b << endl;
        }
    
};


int main() {

    // Creating Objects of Classes
    A O(100, 25);
    Sum S;

    // Passing the Object of Class A to Class Sum
    S.result(O);
}