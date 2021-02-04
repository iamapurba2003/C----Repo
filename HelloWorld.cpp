#include <iostream>
using namespace std;
void sum1();
int main() {
    int a = 5,b = 10;
    float sum;
    sum = a + b;
    cout << "Hello World" << endl;
    cout << "The Sum of the two Numbers " << a << ", " << b << " is " << sum << endl;
    cout << endl;
    sum1();
    return 0;
}

void sum1() {
    int a, b, sumOfTwoNumbers;
    cout << "Enter the First Number: ";
    cin >> a;
    cout << "Enter the Second Number: ";
    cin >> b;
    sumOfTwoNumbers = a + b;
    cout <<"Congratulations! " << a << " + " << b << " is " << sumOfTwoNumbers;
    
}