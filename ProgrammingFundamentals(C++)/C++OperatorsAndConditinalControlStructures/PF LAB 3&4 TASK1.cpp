// Task #1: Write a C++ program to ask the user to input his/her age. Then the program will show if the person is eligible to vote. A person who is eligible to vote must be older than or equal to 18 years old.
// PROGRAM
#include <iostream>
using namespace std;
int main() 
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) 
    {
        cout << "You are eligible to vote." << endl;
    } else 
    {
        cout << "You are not eligible to vote." << endl;
    }
    return 0;
}
