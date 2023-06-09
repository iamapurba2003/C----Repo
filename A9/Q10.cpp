#include <iostream>
using namespace std;

class cashRegister {

    // Declearing Data Members
    int cashOnHand;

    public: // Access Specifier
        cashRegister(int amount = 500) {
            this->cashOnHand = amount;
        }

        float getCurrentBalance() {
            return this->cashOnHand;
        }

        void acceptAmount(int amount = 0) {
            if(amount > 500) {
                this->cashOnHand += amount;
                cout << "\n\nAmount of " << amount << " deposited in account." << endl;
                cout << "Available Balance ~ " << getCurrentBalance() << "\n\n"; 
            } else {
                cout << "Minimum Balance of 500 is required to deposit." << endl;
            }
        }

};

int main() {

    // Declearing Variables
    int result;

    // Declearing Class Objects
    cashRegister customer1(2000);

    // Getting and Setting Values using Mmeber functions
    result = customer1.getCurrentBalance();
    cout << "\nAvailable Balance :~ " << result << "\n\n";

    customer1.acceptAmount(2900);


}