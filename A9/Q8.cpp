#include <iostream>
using namespace std;

class Bank {

    // Declearing Data Members
    char *name;
    char *acc_type;
    float balance, roi;

    public: // Access Specifier
        Bank(char *name, char *acc_type, float balance, float roi) {
            this->name = name, this->acc_type = acc_type;
            this->balance = balance, this->roi = roi;
        }
        void deposit(int amount) {
            if(amount >= 500) {
                this->balance += amount;
                cout << "\nAmount Deposited.\nCurrent Balance: " << this->balance << "\n\n";
            } else {
                cout << "Enter any amount greater than 500. " << endl;
            }
        }
        void withdraw(int amount) {
            if(amount > 0) {
                this->balance -= amount;
                cout << "\nAmount Debited.\nCurrent Balance: " << this->balance << "\n\n";
            } else {
                cout << "Insufficient Balance in Account, Add funds first" << endl;
            }
        }
        void display() {
            cout << "ACCOUNT DETAILS:" << endl;
            cout << "------------------" << endl;
            cout << "Name ~ " << this->name << "\nType Of Account ~ " << this->acc_type << "\nAvailable Balance ~ " << this->balance << "\nRate Of Interest ~ " << this->rate_of_interest() << endl;
        }
        private: // Access Specifier
            float rate_of_interest() {
                return this->roi;
            }
        

};

int main() {
    
    // Declearing Variables
    char name[] = "Apurba Ghosh";
    char acc_type[] = "Savings";


    // Creating Objects of the Class Bank
    Bank B(name, acc_type, 1000000, 12.0);

    // Calling Methods on Bank Objects
    cout << "Depositing Money..." << endl;
    B.deposit(5000000);
    cout << "Withdrawl on process..." << endl;
    B.withdraw(2500000);
    B.display();

    return 0;

}