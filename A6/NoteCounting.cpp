#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number? ";
    cin >> number;
    cout << endl;

    cout << "500: " << number/500 << endl; // Prints the number of Notes of Denomination 500 required
    number %= 500; // Reduces the amount by the number of times 500 denominations has been counted

    cout << "100: " << number/100 << endl;
    number %= 100;

    cout << "50: " << number/50 << endl;
    number %= 50;

    cout << "20: " << number/20 << endl;
    number %= 20;

    cout << "10: " << number/10 << endl;
    number %= 10;

    cout << "5: " << number/5 << endl;
    number %= 5;

    cout << "1: " << number/1 << endl;
    number %= 1;

    return 0;
}