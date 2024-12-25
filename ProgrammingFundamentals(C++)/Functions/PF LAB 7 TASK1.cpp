// Task # 1 Create a function called Largernum() that receives two integer numbers as arguments and returns the Larger number out of them.
// PROGRAM
#include <iostream>
using namespace std;

int Largernum(int num1, int num2) 
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main() 
{
    int number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    int larger = Largernum(number1, number2);
    cout << "The larger number is: " << larger << endl;
    return 0;
}
