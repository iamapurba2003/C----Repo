#include <iostream>
using namespace std;

//? It is a Non-Member function. It can access Private and Protected Data Members of a Class 

// Let's see a Scenario where I have a Class A and it has a friend function Sum. Let's see how to implement it.

class A {

    // Declearing Data Members
    int a, b;
    public: // Access Specifier
        A(int x, int y) {
            this->a = x, this->b = y;
        }

        friend void Sum(A O); // Just Declearing it 

};

// Defining + Intializing the Sum function
void Sum(A O) {
    int x;
    x = O.a + O.b;
    cout << "Addition of X + Y is ~ " << x << endl;
};

int main() {

    // Declearing Object of the Class
    A O(10, 20);
    Sum(O); // Calling Frined Function Sum and Passing Object O to it.
}