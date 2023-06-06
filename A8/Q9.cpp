#include <iostream>
using namespace std;

class Distance {

    int feet; 
    float inches;

    public: // Access Specifier
        void set(int feet, float inches) {
            this->feet = feet;
            this->inches = inches;
        }

        void disp() {
            cout << "Feet -> " << this->feet <<"\nInches -> " << this->inches << "\n\n" << endl;
        }

        Distance add(Distance D) {
            Distance Temp;
            Temp.feet = this->feet + D.feet;
            Temp.inches = this->inches + D.inches;

            return Temp;
        }

};


int main() {
    // Creating Objects of Class
    Distance d1, d2, d3;

    // Setting Value of First Two Objects
    d1.set(34, 45);
    d2.set(56, 32);

    // Adding First Two Distance Objects and Storing the result in Third Object
    d3 = d1.add(d2);

    // Displaying the result of all Distances
    cout << "Distance Object 1 ~ \n";
    d1.disp(); 
    cout << "Distance Object 2 ~ \n";
    d2.disp();
    cout << "Distance Object 3 ~ \n";
    d3.disp();




    return 0;
}