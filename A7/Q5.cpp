#include <iostream>
using namespace std;

class Book {

    int BookNumber;
    char BookTitle[21];
    float Price;

    float TotalCost(int NumberOfBooks) {
        return NumberOfBooks * Price;
    }

    public: // Access Specifier
        void Input(int _bookNumber, char *_bookTitle, float _price) {
            BookNumber = _bookNumber, Price = _price;
            strcpy(BookTitle, _bookTitle);
        }

        void Purchase(int _NumberOfCopies) {
            cout << BookTitle << endl;
            cout << "Total Cost to be Paid, Rs. " << TotalCost(_NumberOfCopies) << " for " << _NumberOfCopies << " Copies." << endl;
            cout << "\n";
            cout << "----------------";
            cout << "\n";
        }

};

int main() {

    Book B1;
    //? Error: conversion from string literal to 'char *' is depricated
    B1.Input(5624, "New Era", 1432);
    B1.Purchase(2);

    Book B2;
    B2.Input(3421, "Mein Kamph", 678);
    B2.Purchase(12);
}