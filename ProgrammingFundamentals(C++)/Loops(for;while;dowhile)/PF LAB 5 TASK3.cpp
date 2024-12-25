// Task # 3: Write a program that prints all Roll numbers of your class using for loop. 
// Output should be as :
// 20SW01     
// 20SW02
// 20SW03
// …..
// …
// 20SW10
// 20SW11 
// and so on.
// PROGRAM
#include <iostream>
using namespace std;
int main() 
{
    for (int i = 2; i <= 168; i += 3) 
    {
        if (i < 10) 
        {
            cout << "24SW0" << i << endl;
        }
        else 
        {
            cout << "24SW" << i << endl;
        }
    }
    return 0;
}
