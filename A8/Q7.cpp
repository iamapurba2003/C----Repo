#include <iostream>
using namespace std;

class Rectangle {

    float length, width;

    public: // Access Specifier
        void setlength(float _length) {
            length = _length;
        }
        void setwidth(float _width) {
            width = _width;
        }
        float perimeter() {
            return 2*(length + width);
        }
        float area() {
            return (length * width);
        }
        void show() {
            cout << "The {length, width} of the Rectangle is ~ " << length << ", " << width << endl;
        }
        int sameArea(Rectangle R) {
            if(R.area() == area()) {
                return 1;
            } 
            return 0;
        }


};


// Encapsulates the Repetative result showing Code
void PrintMessage(int rectangle, Rectangle R) {
    cout << "Rectangle " << rectangle << endl;
    R.show();
    int area = R.area();
    int perimeter = R.perimeter();
    cout << "The Area of the Rectangle is ~ " << area << endl;
    cout << "The Perimeter of the Rectangle is ~ " << perimeter;
    cout << "\n\n";
}

void CheckSameArea(Rectangle r, Rectangle r2) {
    //? Checking if both the rectangle has Same Area
    int result = r.sameArea(r2);
    if(result == 1) {
        cout << "Both the rectangle has same Area of " << r.area();
    } else {
        cout << "Both the rectangle has different areas." << endl;
    }
    cout << "\n\n";
}


int main() {
    
    // Creating Objects of the Class Rectangle
    Rectangle R1;
    Rectangle R2;

    R1.setlength(5.0); R1.setwidth(2.5);
    R2.setlength(5.0); R2.setwidth(18.9);

    PrintMessage(1, R1);
    PrintMessage(2, R2);

    // Checking for Same Area
    CheckSameArea(R1, R2);

    //! Re-setting the length & width of the first Rectangle
    R1.setlength(15); R1.setwidth(6.3);

    PrintMessage(1, R1);
    PrintMessage(2, R2);

    // Re-Checking for Same Area
    CheckSameArea(R1, R2);

    return 0;
}
