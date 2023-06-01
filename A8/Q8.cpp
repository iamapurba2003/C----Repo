#include <iostream>
using namespace std;

class Complex {

    float real, imagenary;

    public: // Access Specifier
        void set(float _real, float _imagenary) {
            real = _real, imagenary = _imagenary;
        }
        void disp() {
            cout << "Complex Number = " << real << " + " << "i(" << imagenary << ")" << endl;
        }
        Complex Sum(Complex c) {
            Complex result;
            result.real = real + c.real;
            result.imagenary = imagenary + c.imagenary;
            return result;
        }

};


// Extracted the Output Code for Avoiding Code Duplication
void Display(int number, Complex C) {
    cout << "Complex Number " << number << endl;
    cout << "--------------------" << endl;
    C.disp();
    cout << "\n\n";
}


int main() {

    // Creating Objects
    Complex c1, c2, c3;

    //? Set Value in Complex Objects
    c1.set(5, 10);
    c2.set(8, 20.5);

    c3 = c1.Sum(c2);

    //? Displaying all Complex Numbers
    Display(1, c1);
    Display(2, c2);
    Display(3, c3);

    return 0;
}












