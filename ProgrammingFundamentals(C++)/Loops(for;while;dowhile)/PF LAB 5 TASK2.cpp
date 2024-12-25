// Task # 2: Generate a series of Odd numbers and even numbers (up to 20) using for loop. 
// Expected output 
// Odd 		even 
// 1		2
// 3		4
// PROGRAM
#include <iostream>
using namespace std;
int main() 
{
    cout << "Odd\t\tEven" << endl;
    for (int i = 1; i < 20; i+=2) 
    {
        cout << i << "\t\t" << i+1 << endl;
    }
    return 0;
}
