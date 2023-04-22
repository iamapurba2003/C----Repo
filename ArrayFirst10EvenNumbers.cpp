#include <iostream>
using namespace std;

int main() {
    cout << "The First 10 Even Numbers are: ";
    for (int i = 1; i <= 10; i++) {
        if (i%2 == 0) {
            cout << i << ", ";
        }
        
    }cout << endl;

    int arr[10];
    for (int i = 0; i<10; i++) {
        cout << "Enter the " << i << " th element: ";
        cin >> arr[i];
    }
    cout << "The Array is: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " <-- ";
    }
    
    return 0;
}
