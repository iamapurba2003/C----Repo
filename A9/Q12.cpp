#include <iostream>
using namespace std;

class DispenserMachine
{

    // Declearing Data Members
    float cash;     // Stores the total Money in the Vending Machine
    string *items;  // Referene pointer to the Products Sold by the Vending Machine
    int *cost;      // Reference Pointer to the cost of each item sold by the Vending Machine
    int *itemCount; // Reference Pointer to the Count of each product available in the Vending Machine

public: // Access Specifier
    DispenserMachine(float cash, string *items, int *cost, int *itemsCount) {
        this->cash = cash, this->cost = cost;
        this->itemCount = itemsCount, this->items = items;
    }
    void showSelection() {
        cout << "\n\n";
        cout << "Name\t\t\t\t\t\t\tQuantity\t\t\t\t\t\tPrice" << "\n\n";
        for (int i = 0; i < 10; i++) {
            if(i == 2) {
                cout << i+1 << ". " << items[i] << "\t\t\t\t\t\t\tx" << itemCount[i] << "\t\t\t\t\t\t\t " << cost[i] << endl;
            } else if(i==5 || i==6 || i==7) {
                cout << i+1 << ". " << items[i] << "\t\t\t\t\tx" << itemCount[i] << "\t\t\t\t\t\t\t " << cost[i] << endl; 
            } else {
                cout << i+1 << ". " << items[i] << "\t\t\t\t\t\tx" << itemCount[i] << "\t\t\t\t\t\t\t " << cost[i] << endl;
            }
        }
        cout << "\n\n";
    }
    void sellProduct(int choice, int Quantity = 1, int amount = 0) {
        for (int idx = 0; idx < 10; idx++) {
            if (idx == choice-1) {
                if(amount < cost[choice-1]*Quantity) {
                    cout << "Insufficient funds!" << endl;
                    break;
                }
                cash += cost[idx];
                itemCount[idx] -= Quantity;
            }
        }
        if(amount >= cost[choice-1]*Quantity){
            cout << "\n\n------------" << endl;
            cout << items[choice-1] << " x" << Quantity << endl;
            cout << "Rs. " << cost[choice-1] << endl;
            cout << "Congratulations!, Product Sold for the said Quantity." << "\n\n";
        }
    }
    friend bool isAvailable(DispenserMachine D, int choice, int __Quantity);
    
};

bool isAvailable(DispenserMachine D, int choice, int __Quantity) {
    for(int i = 0; i < 10; i++) {
        if(choice-1 < 10) {
            if(D.itemCount[choice-1] != 0 && D.itemCount[choice-1] >= __Quantity) {
                return true;
            } else {
                cout << "Sorry!, Product is not available." << endl;
                return false;
            }

        } else {
            cout << "Product doesen't exist." << endl;
            return false;
        }
    }
}

void Menu() {
    cout << "\n\nWelcome to Dispencer Machine..." << endl;
    cout << "------------------------------------\n" << endl;
    cout << "1. All Products" << endl;
    cout << "2. Buy Product" << endl;
    cout << "0. Exit" << "\n\n";

}

void buyProducts(DispenserMachine _dispenser, int _choice, int _Quantity) {
    bool result; // Stores the result returned from the isAvailable() function
    _dispenser.showSelection();
    cout << "Enter the item to Buy? ";
    cin >> _choice;
    cout << "Enter the quantity of the product you wanna buy? ";
    cin >> _Quantity;
    result = isAvailable(_dispenser, _choice, _Quantity); // isAvailable() checks if the requested product is in the items list and if it has atleast 1 unit remaining
    if(result == 1) {
        int amount;
        cout << "\n\n------------------------" << endl;
        cout << "Enter the amount to deposit the money? ";
        cin >> amount;
        _dispenser.sellProduct(_choice, _Quantity, amount);
    } 
}

int main() {

    // Declearing Variables
    int choice = 1;
    int Quantity;
    string items[10] = {
        "Apple",
        "Samsung",
        "HP",
        "JioBook",
        "PrimeBook",
        "Rezerblade R15",
        "Dell Alienware",
        "Asus Primebook",
        "HP Onebook",
        "iMac"};
        int cost[10] = {
            150000,
            85000,
            90000,
            10500,
            22000,
            320000,
            400000,
            150500,
            200000,
            500000
        };
        int itemCount[10] = {
            15,
            20,
            30,
            10,
            5,
            2,
            23,
            40,
            55,
            20
        };

    // Declearing Objects
    DispenserMachine dispenser(5000000, items, cost, itemCount);
    while(choice != 0) {
        Menu();
        cout << "Enter Your Choice? ";
        cin >> choice;
        cout << endl;

        if(choice == 0) {
            cout << "\n\nThank You, Visit Again!" << endl;
            break;
        } else if(choice == 1) {
            dispenser.showSelection();
        } else if(choice == 2) {
            buyProducts(dispenser, choice, Quantity); // Extracted the logic into a seperate function
        }
    }

    return 0;
}