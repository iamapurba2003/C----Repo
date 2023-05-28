// In C++ we have Object Oriented Programming that is Concept of Class and Objects 
// A Class is a blueprint or a Structure of multiple Methods and members i.e Variables
// Each Class has it's own objects which are instances of a Class which has the Same features but different Values 
//? There are three Access Specifiers, Public, Private & Protected

//? Let's See how to define a Class, Say a Class Computer which has a cpu, ram and brand as members 
//? and config and display as methods 
#include <iostream>
using namespace std;

class Computer {
    string cpu; int ram; string brand; // Members of Class

    public: // It will allow anyone outside the Class to acces the methods listed below 
        void config(string CPU, int RAM, string BRAND) {
            cpu = CPU; 
            ram = RAM; 
            brand = BRAND;
        }

        void display() {
            cout << "CPU ~ " << cpu << "\nRam ~ " << ram << "GB" << "\nBrand ~ " << brand << endl;
            cout << "\n";
        }

};


int main() {

    // Creating an Object of the Class Computer
    Computer lap1;
    lap1.config("i5", 8, "HP");
    lap1.display();

    // Creating another Object
    Computer lap2;
    lap2.config("M1 Pro", 16, "Apple");
    lap2.display();


    return 0;
}