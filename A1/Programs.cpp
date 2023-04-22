//
// Created by Apurba Ghosh on 18/03/23.
//
#include <iostream>
using namespace std;





int Q4() {
//    Global Constants for Storing the Count of Denominations & the Amount Entered
    int AMOUNT;
    int FIVE_HUNDRED = 0;
    int HUNDRED = 0;
    int FIFTY = 0;
    int TWENTY = 0;
    int TEN = 0;
    int FIVE = 0;
    int UNIT = 0;

//    Prompt to enter the Amount to be given to the Program
    cout << "Enter the AMOUNT? ";
    cin >> AMOUNT;
    cout << endl;

//    Looping through the length of the Number entered
//    Exiting the Program if the Amount has turned 0 even before the length of it is covered by the Program.
//    Checking if the Amount is Larger than any Denomination, If Yes, increase that by one and Subtract that amount from
//    the given amount and exit the current iteration for the loop to handle the base case of Increasing Smaller
//    Denominations when Higher Denominations are still available to increase.

    while ( AMOUNT != 0 ) {
        if (AMOUNT >= 500) {
            FIVE_HUNDRED += 1;
            AMOUNT -= 500;
            continue;
        }

        if ( AMOUNT >= 100) {
            HUNDRED += 1;
            AMOUNT -= 100;
            continue;
        }

        if ( AMOUNT >= 50) {
            FIFTY += 1;
            AMOUNT -= 50;
            continue;
        }

        if ( AMOUNT >= 20) {
            TWENTY += 1;
            AMOUNT -= 20;
            continue;
        }

        if ( AMOUNT >= 10) {
            TEN += 1;
            AMOUNT -= 10;
            continue;
        }

        if ( AMOUNT >= 5) {
            FIVE += 1;
            AMOUNT -= 5;
            continue;
        }

//        Also, checking if the Amount is less than 5 or not. As, for a Value like 4 will never get accepted in this condition
//        which it should and eventually form an infinite loop.
        if ( AMOUNT == 1 || AMOUNT < 5) {
            UNIT += 1;
            AMOUNT -= 1;
            continue;
        }

    }

//    Displaying the Result
    cout << "The Results are ~" << endl;
    cout << "500: " << FIVE_HUNDRED << "\n100: " << HUNDRED << "\n50: " << FIFTY << "\n20: " << TWENTY << "\n10: " << TEN << "\n5: " << FIVE << "\n1: " << UNIT << endl;
    return 0;
}


int main() {
    Q4();
}