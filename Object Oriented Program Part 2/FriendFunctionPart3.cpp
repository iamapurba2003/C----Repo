#include <iostream>
using namespace std;

//? Scenario 3 :- In this scenarion we have a member funtion of class A which is a friend function of another class B

// Objective :- Add Data members of A & B

class B; // Forward Declearation as B is Unknown as of this point.
class A {

    // Declearing Data Member
    int a;
    public: // Access Specifier
        A(int x) {
            this->a = x;
        }
        int Sum(B O); // Member function of class A which will further be friend of class B

};

// Defining + Initializing class B
class B {
    
    // Declearing Data Members
    int b;
    public: // Access Specifier
        B(int y) {
            this->b = y;
        }

        friend int A::Sum(B O); // Referencing the Same Sun function of class A using scope resolution Operator, note will have to use the exact same name and Parameter as decleared in class A
};

// Defining + Initializing friend & member function Sum
int A::Sum(B O) {
    int z;
    z = this->a + O.b;

    return z;
};

int main() {

    // Creating Objects of class
    int r;
    A O(10);
    B O2(100);

    r = O.Sum(O2);
    cout << "The Value of class A(a) + class B(b) is ~ " << r << endl;

}