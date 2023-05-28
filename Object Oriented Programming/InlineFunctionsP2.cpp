#include <iostream>
using namespace std;

// Now let's see how we can decleare the Same input, display method outside the class and make input an inline method

class A {
    int a, b;

    public:
        void input(int x, int y);
        void display();

};

// Here, the inline keyword helps making the input method an inline method
inline void A::input(int x, int y) { // :: is the Scope Resolution Operator and with this way we decleare the method outside the class
    a = x, b = y;
};

// Here the display method is a Outline method
void A::display() {
    cout << "A ~ " << a << "\nB ~ " << b << endl;
    cout << "\n";
};

int main() {

    // Creating an Object of the Class A
    A o1;
    o1.input(100, 200);
    o1.display();

    // Creating another object
    A o2;
    o2.input(550, 650);
    o2.display();


    return 0;
}


// Let's learn more about inline and Outline in the next Chapter