#include <iostream>
using namespace std;

class friendfunc1 {

    // Declearing Data Members
    int one, four, five;

    public: // Access Specifier
        friendfunc1(int one, int four, int five) {
            this->one = one;
            this->four = four;
            this->five = five;
        }
        friend class friendfunc2;

};

class friendfunc2 {

    // Declearing Data Members
    int two, three;

    public: // Access Specifier
        friendfunc2(int two, int three) {
            this->two = two;
            this->three = three;
        }
        void calcavg(friendfunc1 f) {
            cout << "The Average of the 5 numbers is " << (f.one + this->two + this->three + f.four + f.five) / 5 << endl;
        }

};

int main() {

    // Declearing Objects
    friendfunc1 f(20, 23, 45);
    friendfunc2 f2(34, 56);

    // Passing Object of friendfunc1 to friendfunc2 class
    f2.calcavg(f);

    return 0;

}