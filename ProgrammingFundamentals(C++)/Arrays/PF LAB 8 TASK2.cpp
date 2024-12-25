// Task #2 Consider the array in Task  #1 . Write a C++ program that print the all elements of the array in reverse order, As 25,20, …5.
// PROGRAM
#include <iostream>
using namespace std;

int main() 
{
    int array[] = {5, 10, 15, 20, 25};
    int size = sizeof(array) / sizeof(array[0]);
    cout << "Array elements in reverse order: ";
    for (int i = size - 1; i >= 0; i--) 
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
