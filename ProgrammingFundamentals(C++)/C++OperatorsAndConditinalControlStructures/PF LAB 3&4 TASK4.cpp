// Task #4: Write a program that will ask the user to enter any number and the program checks whether the entered number is an even number or odd number.
// PROGRAM
#include <iostream>
using namespace std;
int main() 
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 2 == 0) 
    {
        cout << number << " is an even number." << endl;
    } 
    else 
    {
        cout << number << " is an odd number." << endl;
    }
    return 0;
}
