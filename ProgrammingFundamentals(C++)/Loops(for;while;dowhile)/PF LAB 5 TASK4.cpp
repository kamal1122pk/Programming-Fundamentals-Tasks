// Task # 4 Write a program to print the table of characters that are equivalent to the Ascii codes from 97 to 122. The program will print 10 characters per line.
// PROGRAM
#include <iostream>
using namespace std;

int main() 
{
    int count = 0;
    for (int i = 97; i <= 122; i++) 
    {
        cout << char(i) << " ";
        count++;
        if (count == 10) 
        {
            cout << endl;
            count = 0;
        }
    }
    return 0;
}
