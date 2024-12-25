// Task#3 Write a function called swap() that interchanges two int values passed to it by the calling program.     
// PROGRAM
#include <iostream>
using namespace std;

void swap(int &a, int &b) 
{
    int temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Before swapping:" << endl;
    cout << "First number: " << num1 << ", Second number: " << num2 << endl;
    swap(num1, num2);
    cout << "After swapping:" << endl;
    cout << "First number: " << num1 << ", Second number: " << num2 << endl;
    return 0;
}   
