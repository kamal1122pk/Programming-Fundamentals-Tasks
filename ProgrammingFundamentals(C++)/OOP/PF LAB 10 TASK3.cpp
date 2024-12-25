// Task # 3 Create an employee class. The member should comprise an int for storing the employee number, and float for the employee’s salary. Member functions should allow the user to enter this data and display it. Write a main() function that allows the user to enter data for three employees and display it.
// PROGRAM
#include <iostream>
using namespace std;
class Employee 
{
private:
    int employeeNumber;
    float salary;
public:
    void enterData() 
    {
        cout << "Enter employee number: ";
        cin >> employeeNumber;
        cout << "Enter employee salary: ";
        cin >> salary;
    }
    void displayData() 
    {
        cout << "Employee Number: " << employeeNumber << ", Salary: " << salary << endl;
    }
};

int main() 
{
    Employee employees[3];

    for (int i = 0; i < 3; i++) 
    {
        cout << "Enter data for employee " << i + 1 << endl;
        employees[i].enterData();
    }

    cout << "\nEmployee Data:" << endl;
    for (int i = 0; i < 3; i++) 
    {
        employees[i].displayData();
    }
    return 0;
}
