// Task # 2 Create a class called MyClass that has one int member. Include member functions to initialize it to 0, to initialize it to an integer value, to display it. Write a program to test this class.
// PROGRAM
#include <iostream>
using namespace std;
class MyClass 
{
private:
    int value;
public:
    void initializeToZero() 
    {
        value = 0;
    }
    void initializeToValue(int v) 
    {
        value = v;
    }
    void displayValue() 
    {
        cout << "The value is: " << value << endl;
    }
};

int main() 
{
    MyClass obj;
    obj.initializeToZero();
    obj.displayValue();
    obj.initializeToValue(25);
    obj.displayValue();
    return 0;
}
