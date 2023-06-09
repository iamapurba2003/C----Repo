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
    DispenserMachine(float cash, string *items, int *cost, int *itemsCount)
    {
        this->cash = cash, this->cost = cost;
        this->itemCount = itemsCount, this->items = itmes;
    }
    void showSelection()
    {
        cout < "\n\n";
        for (int i = 0; i < 10; i++)
        {
            cout << i << ". " << items[i] << endl;
        }
        cout < "\n\n";
    }
    void sellProduct(int choice, int Quantity = 1)
    {
        for (int idx = 0; idx < 10; idx++)
        {
            if (choice == i)
            {
                cout << "\n\n";
                cout << "Product " << items[idx] << "sold. " << " x" << Quantity << endl;
                cout << "\n\n";
                cash += cost[i];
                itemCount[i] -= Quantity;
            }
        }
    }
};

int main()
{

    // Declearing Variables
    int choice = 1;
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


    return 0;
}