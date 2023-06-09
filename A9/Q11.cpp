#include <iostream>
using namespace std;

class dispenserType {

    // Declearing Data Members
    int numberOfItems, cost;

    public: // Access Specifier
        dispenserType(int cost = 50, int numberOfItems = 50) {
            this->cost = cost;
            this->numberOfItems = numberOfItems;
        }
        int getNoOfItems() {
            return this->numberOfItems;
        }
        int getCost() {
            return this->cost;
        }
        void makeSale() {
            this->numberOfItems -= 1;
            cout << "\n\nCongratulations!, Your Sale is executed." << endl;
            cout << "Number Of Items Now are ~ " << this->getNoOfItems() << "\n";
            cout << "Total Cost is ~ " << getCost() << endl;
        }

};


int main() {

    // Creating Variables
    int result;

    // Creating Objects of class
    dispenserType dispenser(3200, 50);

    // Getting & Setting Values using Object
    result = dispenser.getNoOfItems();
    cout << "\n\nNumber of Items are ~ " << result << endl;

    result = dispenser.getCost();
    cout << "\n\nTotal Cost of Item is ~ " << result << endl;

    // Making a Sale 
    dispenser.makeSale();


}