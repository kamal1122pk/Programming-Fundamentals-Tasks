// Task#3 Write a C++ program that takes a single character as an input and displays whether it is a vowel or a consonant. 
// PROGRAM
#include <iostream>
using namespace std;
int main() 
{
    char character;
    cout << "Enter a single character: ";
    cin >> character;
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' || character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') 
    {
        cout << character << " is a vowel." << endl;
    } 
    else 
    {
        cout << character << " is a consonant." << endl;
    }
    return 0;
}
