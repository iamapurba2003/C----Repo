#include <iostream>
using namespace std;

//? Now, let's sum two objects from an Array of Objects with a Constructor accepting two values
//? as Parameter

class Sum {
    
    // Declearing Data Members
    int a;
    float b;

    public: // Access Specifier
        Sum(int x = 0, int y = 0) {
            this->a = x, this->b = y;
        }

        Sum _Sum(Sum *p) {
            Sum temp;

            // Need to understand the underlying mechanism of the loop how does it adjust the sum of obejects
            for(int i = 0; i < 2; i++) {
                temp.a = this->a + p->a;
                temp.b = this->b + p->b;
                p++;
            }
            return temp;
        }

        void display() {
            cout << "Sum of both objects are, " << "\nA: " << a << "\nB: " << b << "\n\n"; 
        }

};


int main() {

    // Declearing Objects
    Sum S[2] = {Sum(100, 200), Sum(3000, 450)};

    Sum temp = S[0]._Sum(S);
    temp.display();


    return 0;

}