// TASK #1 Write a program that reads a group of numbers from the user and places them in an array of type float. Once the numbers are stored in the array, the program should print them. Use pointer notation whenever possible.
// PROGRAM
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    float arr[n];
    float* ptr = arr;
    cout << "Enter " << n << " numbers:";
    for (int i = 0; i < n; i++) 
    {
        cin >> *(ptr + i);
    }
    cout << "The numbers you entered are:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << *(ptr + i) << " ";
    }
    return 0;
}
