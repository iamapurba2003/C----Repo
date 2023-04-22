// Created by Apurba Ghosh on 31/03/23.

#include <iostream>
using namespace std;

// Q.1) Write a program to print numbers from 1 to 10.
void PrintNumbers() {
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }
}

// Q.2) Write a program that asks the user for a positive integer value. The program should calculate the sum of all the
// integers from 1 up to the number entered. For example, if the user enters 20, the loop will find the sum of 1, 2, 3, 4, ... 20

void SumOfNumbersInLoop() {
    int sum = 0;
    int number;
    cout << "Enter a Number? ";
    cin >> number;
    cout << endl;

    for(int i = 1; i <= number; i++) {
        sum = sum + i;
    }
    cout << "The Sum from (1 -> " << number << ") is " << sum << endl;
}

// Q.3) Write a program that prompts the user to input a number and prints its
// multiplication table.

void MultiplicationTable() {
    int table;
    cout << "Enter which Multiplication Table to Show? ";
    cin >> table;
    cout << endl;

    for(int i = 1; i <= 10; i++) {
        cout << table << " X " << i << " = " << table*i << endl;
    }
}


// Q.4) Write a program that prompts the user to input a number and prints its factorial. The factorial of an integer n
// is defined as n! = 1 x 2 x 3 x ... x n; if n > 0 = 1; if n = 0 For instance, 6! can be calculated as 1 x 2 x 3 x 4 x 5 x 6.

void factorial() {
    int fact = 1;
    int number;
    cout << "Enter a Number? ";
    cin >> number;
    cout << endl;

    for(int i = 1; i < number; i++) {
        fact = fact * (i+1);
    }
    cout << "Factorial of " << number << " is " << fact;
}


// Q.5)Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.

void RaisedToPower() {
    int num1, num2;
    int power = num1;
    cout << "Enter Two Numbers? ";
    cin >> num1 >> num2;
    cout << endl;

    for(int i = 1; i <= num2; i++) {
        power = power * num1;
    }
    cout << num1 << " raised to Power " << num2 << " is " << power;

}


// Q.6)Write a program that prompts the user to input a number and reverse its digits. For example, the reverse of 12345
// is 54321; reverse of 5600 is 65.

void reversed() {
    int num;
    int reversed = 0;
    cout << "Enter the number to be reversed? ";
    cin >> num;
    cout << endl;

    // To take out length of the number
    int temp = num;
    int length = 0;
    while (temp != 0) {
        temp = temp/10;
        length++;
    }

    // Getting the Number Reversed, Omitting 0s isn't achieved yet.
    int num2 = num;
    for(int i = 1; i <= length; i++) {
        int cur = num2%10;
        num2 /= 10;
        reversed = reversed*10 + cur;
    }
    cout << "Before Reversal :~ " << num << endl;
    cout << "After Reversal :~ " << reversed << endl;

}


// Q.7) Write a program that asks the user to input a positive integer. Your program should find and display the sum of
// digits of a number. For example, the sum of digits of number 32518 is 3+2+5+1+8 = 19.

void DigitSum() {

    // Variable Declarations
    int num;
    int sum = 0;

    // User Prompt
    cout << "Enter a Number? ";
    cin >> num;
    cout  << endl;

    // Main Logic ( Digit Sum )
    int nums = num;
    while (nums != 0) {
       sum = sum + nums%10;
       nums /= 10;
    }

    cout << "The Digit Sum of " << num << " is " << sum << endl;

}


// Q.8) A palindromic number is a number that remains the same when its digits are reversed. For example, 16461.
// Write a program that prompts the user to input a number and determine whether the number is palindrome or not.

void Palindrome() {

    // Variable Declaration
    int num;
    int reversed = 0;
    int cur = 0;

    // User Prompt
    cout << "Enter a Number to check for Palindrome? ";
    cin >> num;
    cout << endl;

    // Reversing Logic
    int numCopy = num;
    while (numCopy != 0) {
        cur = numCopy%10;
        reversed = reversed*10 + cur;
        numCopy /= 10;
    }

    if(num == reversed) {
        cout << num << " is a Palindrome.";
    } else {
        cout << num << " is not a Palindrome.";
    }


}

// Q.9) Write a program that prompts the user to input a decimal integer and display its binary equivalent.

void DecimalToBinary() {

    // Global Variable Declaration
    int num;
    int Binary = 0;
    // char BinaryS[] = "";

    // User Prompt
    cout << "Enter a Decimal Number? ";
    cin >> num;
    cout << endl;

    // Binary Conversion Process --> Addition of Zeros after 1 in Binary format is yet to be achieved, will be doing that
    // with help of Arrays.
    int cur;
    while(num != 0) {
        cur = num%2;
        num = num/2;
        if (cur == 0) {
            continue;
        } else if (cur <= 1) {
            Binary = Binary * 10 + 1;
        } else {
            Binary = Binary * 10 + 0;
        }
    }
    cout << "The Binary Conversion is " << Binary << endl;
}


// Q.10) Write a program that prompts the user to input a binary number and display its decimal equivalent.
void BinaryToDecimal() {

    // Global Variable Declaration
    int Decimal = 0;
    int number;
    int length = 0;

    // User Prompt
    cout << "Enter a Binary Number? ";
    cin >> number;
    cout << endl;
    int numberCopy = number;
    int numCopy = number;

    // Getting the Length of the Binary Number
    while (numberCopy != 0) {
        numberCopy /= 10;
        length++;
    }

    int cur;
    int power = 2;
    // Looping through the Binary Number for Decimal Conversion
    for(int i = 0; i < length; i++) {
        cur = number%10;

        // For Base Case when Power is 0
        if (i == 0) {
            Decimal = Decimal + (cur * 1);

        } else if (i == 1) {
            // for Case When Power is 1
            Decimal = Decimal + ( cur * 2 );

        } else {
            // for Case when Power is more than 0, We Calculate 2 Power i
            for(int j = 1; j < i; j++) {
                power = power * 2;
            }

            // Adding the Current Binary Numbers Decimal Equivalent
            Decimal = Decimal + (cur * power);
            power = 2;

        }


        // Deleting the Binary Number Whose Conversion has been done.
        number /= 10;

    }

    cout << "The Decimal Conversion of " << numCopy << " is " << Decimal << endl;
}


// Q.11) Write a program that prompts the user to input a positive integer. It should then output a message indicating
// whether the number is a prime number. [A prime number is a number that is evenly divisible only by itself and 1.
// For example, the number 5 is prime because it can be evenly divided only by 1 and 5. The number 6, however,
// is not prime because it can be divided evenly by I, 2, 3, and 6.]

void PrimeNumber() {

    // Global Variable Declaration
    int PNumber;
    int isPrime = 0;

    // User Prompt
    cout << "Enter a Positive Number? ";
    cin >> PNumber;
    cout << endl;

    // Re-asking if by mistake a Negative Number is entered.
    if(PNumber < 0) {
        cout << "Enter a Positive Number? ";
        cin >> PNumber;
    }

    // Prime Number Checking and marking the isPrime Variable according to that, 0 means not Prime & 1 means Prime.
    for(int i = 1; i <= (PNumber/2); i++) {
        if (PNumber%i == 0) {
            isPrime = isPrime;
            break;

        } else {
            isPrime = 1;

        }
    }

    // Spitting the Result based on the isPrime Variable.
    if(isPrime == 1) {
        cout << PNumber << " is a Prime Number." << endl;
    } else {
        cout << PNumber << " is not a Prime Number." << endl;
    }
}


// Q.12) Write a program to find prime numbers in a given range. Also calculate how many prime numbers present within
// that given range.

void AllPrimeInRange() {
    int range1, range2;
    int length = 0;

    cout << "Enter a range (Give 2 Inputs)? ";
    cin >> range1 >> range2;
    cout << endl;

    for(int i = range1+1; i < range2; i++) {
        if(i%2 == 0) {
            cout << i << " -<-- Not Prime" << endl;

        } else {
            cout << i << " +<-- Prime" << endl;
            length++;
        }
    }

    cout << "The total number of Prime Numbers in range " << range1 << " --> " << range2 << " is " << length << endl;

}


// Q.13) Write a program that prompts the user to input two numbers and display its HCF and LCM.
// [The Highest Common Factor (HCF) also called the Greatest Common Divisor (GCD) of two whole numbers, is the largest
// whole number that's a factor of both of them. LCM is product of two numbers/HCF]

void HCF_LCM() {

    // Global Variable Declaration
    int num1, num2;
    int divisor, dividend;

    // User Prompt
    cout << "Enter the two numbers? ";
    cin >> num1 >> num2;
    cout << endl;
    int num1Copy = num1;
    int num2Copy = num2;

    // Checking for the larger number
    if (num1 > num2) {
        dividend = num1;
        divisor = num2;

    } else {
        dividend = num2;
        divisor = num1;

    }

    // H.C.F Calculation
    int calc;
    while (true) {
        calc = dividend%divisor;
        if (calc == 0) {
            cout << divisor << " is the H.C.F of " << num1 << " & " << num2 << endl;
            break;

        } else {
            dividend = divisor;
            divisor = calc;
        }
    }



    // L.C.M Calculation
    int result = 1;

    while(num1 != 1){
        for(int i = 1; i <= num1Copy; i++) {
            if(i == 1) {
                continue;
            }
            if(num1%i == 0) {
                result = result * i;
                num1 /= i;
                break;
            } else {
                result = result;
            }
        }

    }

    while(num2 != 1){
        for(int i = 1; i <= num2Copy; i++) {
            if(i == 1){
                continue;
            }
            if(num2%i == 0) {
                result = result * i;
                num2 /= i;
                break;
            } else {
                result = result;
            }
        }

    }

    cout << result << " is the L.C.M of " << num1Copy << " & " << num2Copy << endl;
}













// Main Function
int main() {
//    PrintNumbers();
//    SumOfNumbersInLoop();
//    MultiplicationTable();
//    factorial();
//    RaisedToPower();
//    reversed();
//    DigitSum();
//    Palindrome();
//    DecimalToBinary();
//    BinaryToDecimal();
//    PrimeNumber();
//    AllPrimeInRange();
    HCF_LCM();
    return 0;
}