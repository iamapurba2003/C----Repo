#include <iostream>
using namespace std;

class Employee {

    // Declearing Data Members
    int basic_salary;
    char *emp_name, *emp_id;

    public: // Access Specifier
        Employee(int basic_salary, char *emp_name, char *emp_id) {
            this->basic_salary = basic_salary;
            this->emp_id = emp_id;
            this->emp_name = emp_name;
        }

        friend class Pay;

};

class Pay {

    public: // Access Specifier
        void _Pay(Employee E) {
            cout << "Employee Name ~ " << E.emp_name << endl;
            cout << "Employee Id ~ " << E.emp_id << endl;
            cout << "Gross Salary ~ " << E.basic_salary + 15000 << endl;
            cout << "Net Salary ~ " << (E.basic_salary + 15000 - 3000) << endl;
        }

};

int main() {
    
    // Declearing Variables;
    char emp_id[] = "FEST45A";
    char emp_name[] = "Apurba Ghosh";
    int basic_salary = 550000;
    
    // Creating Objects
    Employee E(basic_salary, emp_name, emp_id);
    Pay p;
    
    // Passing Employee Object to Pay Member function
    p._Pay(E);
}