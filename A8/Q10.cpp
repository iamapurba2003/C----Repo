#include <iostream>
using namespace std;

class Time {

    // Declearing Data Members
    int hours, minutes;

    public: // Access Specifier
        void setTime(int hours, int minutes) {
            this->hours = hours;
            this->minutes = minutes;
        }
        void showTime() {
            cout << "The Time is ~ " << this->hours <<" hours " << this->minutes << " minutes\n" << endl;
        }

        Time Sum(Time T) {
            Time Temp;
            Temp.hours = this->hours + T.hours;
            Temp.minutes = this->minutes + T.minutes;

            return Temp;
        }

};


int main() {
    
    // Creating Objects
    Time t1, t2, t3;

    // Setting Values in Objects
    t1.setTime(4, 50);
    t2.setTime(12, 30);

    // Adding Two Time Objects and Storing the result in Thord Object
    t3 = t1.Sum(t2);

    // Displaying All Objects
    cout << "Time Object 1 ~ \n";
    t1.showTime();

    cout << "Time Object 2 ~ \n";
    t2.showTime();

    cout << "Time Object 3 ~ \n";
    t3.showTime();

    return 0;
}