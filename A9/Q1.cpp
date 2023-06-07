#include <iostream>
using namespace std;

class Student {

    // Declearing Data Members
    char *name;
    int *marks;

    public: // Access Specifier
        void get_data(char *name, int marks[]) {
            this->name = name;
            this->marks = marks;
        }
        void display(float avg) {
            cout << "Name Of Candidate is ~ " << name << "\nAverage Marks is -> " << avg <<  endl;
        }
        friend class Average;

};

class Average {

    public: // Access Specifier
        void mark_avg(int marks[], Student S) {
            S.display((marks[0] + marks[1] + marks[2]) / 3);
        }


};

int main() {

    // Declearing Variables
    int marks[3] = {90, 99, 100};
    char name[] = "Apurba Ghosh";

    // Declearing Objects
    Student S;
    Average A;

    // Setting Data 
    S.get_data(name, marks);
    A.mark_avg(marks, S);


    return 0;


}