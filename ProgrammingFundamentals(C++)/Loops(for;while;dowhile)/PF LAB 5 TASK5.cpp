// Task# 5: Write a program that takes an inter as an input and prints its factorial 
// Output
// Number : 5 
// Factorial : 120
// PROGRAM
#include <iostream>
using namespace std;

int main() 
{
    int num;
    long factorial = 1;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= num; i++) 
    {
        factorial *= i;
    }
    cout << "Number: " << num << endl;
    cout << "Factorial: " << factorial << endl;
    return 0;
}
