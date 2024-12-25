// Task # 4
// Write a C++ program to print the ascii value of a given character. 
// Expected Output
// The ASCII value of Z is ;90
// PROGRAM
#include <iostream>
using namespace std;
int main() 
{
    cout << "Enter a character: ";
    char character = getchar();
    cout << "The ASCII value of " << character << " is: " << int(character) << endl;
    return 0;
}
