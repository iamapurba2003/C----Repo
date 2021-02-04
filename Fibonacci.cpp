#include <iostream>
using namespace std;
int fibonacci();
int main() {
    for (int i = 10; i>=0; i--) {
        cout << "The Value of i is " << i << endl;  
    }
    int array[10];
    for (int i = 0; i<10; i++){
        cout << "Enter the Array: ";
        cin>>array[i];
    }
    cout << "The Array is ";
    for (int i = 0; i < 10; i++){
        cout << array[i] << ", ";
    }
    
    return 0;
}




