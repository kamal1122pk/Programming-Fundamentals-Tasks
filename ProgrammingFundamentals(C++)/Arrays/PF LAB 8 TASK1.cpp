// Task # 1: Write a C++ program that creates and initializes an array of type integer as : int array[]={5,10,15,20,25}; and computes the SUM of the elements in an array.
// PROGRAM
#include <iostream>
using namespace std;

int main() 
{
    int array[] = {5, 10, 15, 20, 25};
    int size = sizeof(array) / sizeof(array[0]);
    int sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += array[i];
    }
    cout << "The sum of the elements in the array is: " << sum << endl;
    return 0;
}
