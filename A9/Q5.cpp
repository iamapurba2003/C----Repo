#include <iostream>
using namespace std;

class Complex {

    // Declearing Data Members
    float real, imagenary;

    public: // Access Specifier
        Complex(float real, float imagenary) {
            this->real = real;
            this->imagenary = imagenary;
        }
        friend void addComplex(Complex c, Complex C);

};

void addComplex(Complex c, Complex C) {
    float real, imagenary;
    real = c.real + C.real;
    imagenary = c.imagenary + C.imagenary;

    cout << "The Sum of both the Complex Number is ~ " << real << " + " << "i" << "(" << imagenary << ")" << endl;

}


int main() {

    // Declearing Objects
    Complex c(23, 40.5);
    Complex C(45, 65.3);

    addComplex(c, C);


    return 0;

}