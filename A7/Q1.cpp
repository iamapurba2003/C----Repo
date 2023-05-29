#include <iostream>
using namespace std;

class Student {

    int admno;
    char sname[21];
    float eng, math, science;
    float total;

    float ctotal() {
        return (eng + math + science);
    }

    public: // Access Specifier
        void TakeData(int _admno, char _sname[21], float _eng, float _math, float _science) {
            admno = _admno;
            strcpy(sname, _sname);
            eng = _eng, math = _math, science = _science;
            total = ctotal();

        }
        void ShowData() {
            cout << "Student Name ~ " << sname << "\tAdmission Number ~ " << admno << endl;
            cout << "English ~ " << eng << "\nMaths ~ " << math << "\nScience ~ " << science << "\nTotal ~ " << total << endl;
            cout << "\n";
        }
};

int main() {

    // Declearing Objects 
    Student S1;
    //? Error: conversion from string literal to 'char *' is deprecated
    S1.TakeData(23450, "Apurba Ghosh", 90.0, 99.0, 100);
    S1.ShowData();
}