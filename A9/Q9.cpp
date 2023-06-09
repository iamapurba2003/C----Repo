#include <iostream>
using namespace std;

class VendingMachine {

    // Declearing data members
    int totalPrice;
    string Products[4] = {"Candie", "Chip", "Gum", "Cookie"};
    int cost[4] = {120, 70, 78, 230};
    int selection;
    int Quantity = 1;

    public: // Access Specifier
        void ShowProducts() {
            cout << "All Products..." << "\n\n";
            for(int i = 0; i < 4; i++) {
                cout << Products[i] << ", ";
            }
        }

        void Selection() {
            cout << "Choose Your Selection? ";
            cin >> this->selection;
            cout << "Enter Quantity of Product?(1-10) ";
            cin >> this->Quantity;
            for(int i = 0; i < 4; i++) {
                if(i == (selection - 1)) {
                    this->totalPrice = cost[i] * Quantity;
                }
            }
        }

        void ShowDetails() {
            cout << "Bill Details ..." << "\n\n";
            cout << "You Have Selected " << this->Products[selection-1] << "  x" << this->Quantity << endl;
            cout << "Total Amount " << this->totalPrice << endl;
        }

        void acknowledgement() {
            cout << "\n\n" << "Confirm Order ?(0/1) ";
            cin >> this->selection;
            if(selection == 0) {
                cout << "\n" << "Item Purchased. Congratulations!" << endl;
            } else {
                cout << "Order Cancelled. Visit Again!" << endl;
            }
        }

};

void Menu() {
    cout << "1. All Products\n2.Make Selection" << endl;
    cout << "3. Billing Amount & Details " << endl;
}


int main() {

    // Declearing Variables
    int choice;

    // Creating Objects
    VendingMachine user1;

    cout << "Welcome to Vending Machine Program! " << "\n\n"; 
    while (choice != 0)
    {
        cout << "\n\n";
        Menu();
        cout << "\n\nEnter Choice?(1-3 / 0 to exit) ";
        cin >> choice;
        cout << "\n\n";
        if(choice == 0) {
            cout << "Thank You, Visit Again!" << endl;
        } else if(choice == 1) {
            user1.ShowProducts();
        } else if(choice == 2) {
            user1.Selection();
        } else if(choice == 3) {
            user1.ShowDetails();
            user1.acknowledgement();
        }
    }


    return 0;
        
}