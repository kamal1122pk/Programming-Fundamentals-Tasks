// Task # 4 Create a class that includes a data member that holds a “Serial number” for each object created from the class. That is, the first object created will be numbered 1, the second 2, and so on.
// PROGRAM
#include <iostream>
using namespace std;
class SerialNumber 
{
private:
    static int count;
    int serialNumber;
public:
    SerialNumber() 
    {
        serialNumber = ++count;
    }
    void displaySerialNumber() 
    {
        cout << "Serial Number: " << serialNumber << endl;
    }
};
int SerialNumber::count = 0;
int main() 
{
    SerialNumber obj1;
    obj1.displaySerialNumber();
    SerialNumber obj2;
    obj2.displaySerialNumber();
    SerialNumber obj3;
    obj3.displaySerialNumber();
    return 0;
}