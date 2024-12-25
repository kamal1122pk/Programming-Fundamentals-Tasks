// Task#3 Consider the following interger array of size 10. 
// int array[10]={1,2,3,5,8,10,12,23,28,15};
//  Write a c++ program that takes an integer value from the user at runtime and finds that value in the given array . If the value is found display Message “Number is Found “ else display Message “Number does not Found “.
// PROGRAM
#include <iostream>
using namespace std;
int main() 
{
    int array[10] = {1, 2, 3, 5, 8, 10, 12, 23, 28, 15};
    int value, found = 0;
    cout << "Enter a number to search: ";
    cin >> value;
    for (int i = 0; i < 10; i++) 
    {
        if (array[i] == value) 
        {
            found = 1;
            break;
        }
    }
    if (found) 
    {
        cout << "Number is Found" << endl;
    } 
    else 
    {
        cout << "Number does not Found" << endl;
    }
    return 0;
}	
