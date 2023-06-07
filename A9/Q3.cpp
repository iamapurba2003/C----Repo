#include <iostream>
using namespace std;

class Employee {

    // Declearing Data Members
    char *name;
    int Salary;
    char *dept;

    public: // Access Specifier
        Employee(char *name, int Salary, char *dept) {
            this->name = name;
            this->Salary = Salary;
            this->dept = dept;
        }
        friend class Department;

};

class Department {

    public: // Access Specifier
        void disp_salary(Employee E) {
            cout << "Name ~ " << E.name << "\nDepartment ~ " << E.dept << "\nSalary ~ " << E.Salary << endl;
        }

};

int main() {
    
    // Declearing Variables
    char name[] = "Apurba Ghosh";
    char dept[] = "Management";
    int Salary = 1000000;

    // Declearing Objects
    Employee E(name, Salary, dept);
    Department D;

    // Passing Employee Object to Department Member Function
    D.disp_salary(E);


    return 0;

}