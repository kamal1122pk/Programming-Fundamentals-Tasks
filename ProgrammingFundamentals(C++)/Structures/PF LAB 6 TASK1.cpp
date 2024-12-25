// Task # 1 Create a Structure called employee that contains two members: an employee number (type int) and the employee’s salary (type float). Ask the user to fill this data for two employees, store it in two variables of type struct employee, and then display the information for each employee.
// PROGRAM
#include <iostream>
using namespace std;

struct employee 
{
    int empNumber;
    float salary;
};
int main() 
{
    employee emp1, emp2;
    cout << "Enter details for Employee 1:" << endl;
    cout << "Employee Number: ";
    cin >> emp1.empNumber;
    cout << "Salary: ";
    cin >> emp1.salary;
    cout << "Enter details for Employee 2:" << endl;
    cout << "Employee Number: ";
    cin >> emp2.empNumber;
    cout << "Salary: ";
    cin >> emp2.salary;
    cout << "\nDetails of Employees:" << endl;
    cout << "Employee 1:" << endl;
    cout << "Employee Number: " << emp1.empNumber << endl;
    cout << "Salary: " << emp1.salary << endl;
    cout << "\nEmployee 2:" << endl;
    cout << "Employee Number: " << emp2.empNumber << endl;
    cout << "Salary: " << emp2.salary << endl;
    return 0;
}
