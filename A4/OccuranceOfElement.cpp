#include <iostream>
using namespace std;

int main() {
	int number;
	int visited = 0;
	int array[10] = {1, 34, 56, 7, 34, 63, 8, 34};

	cout << "Enter the elememt to Search? ";
	cin >> number;

	// Searching and Marking
	for(int i = 0; i < 10; i++) {
		if(array[i] == number) {
			visited++;
		} 
	}

	if (visited == 0) {
		cout << "Element not Present!" << endl;
	} else {
		cout << "The element " << number << " is Present " << visited << " times" << endl;
	}
}
