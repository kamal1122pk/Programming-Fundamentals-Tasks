// Task # 2 Write a function called zeroSmaller() that takes two integer arguments by reference and then sets the smaller of the two numbers to 0. Write a main function to exercise this function.
// PROGRAM
#include <iostream>
using namespace std;
void zeroSmaller(int &num1, int &num2) 
{
    if (num1 < num2) 
    {
        num1 = 0;
    } 
    else 
    {
        num2 = 0;
    }
}
int main() 
{
    int number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    zeroSmaller(number1, number2);
    cout << "After applying zeroSmaller():" << endl;
    cout << "First number: " << number1 << endl;
    cout << "Second number: " << number2 << endl;
    return 0;
}
