// Task #5: Write a program that accepts two numbers from the user and prints whether both numbers are equal are not
// PROGRAM
#include <iostream>
using namespace std;

int main() 
{
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    if (num1 == num2) 
    {
        cout << "Both numbers are equal." << endl;
    } 
    else 
    {
        cout << "Both numbers are not equal." << endl;
    }
    return 0;
}
