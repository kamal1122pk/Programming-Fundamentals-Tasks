// Task # 1 Create a class having 4 functions, add, sub, mul and div. Each function accepts 2 parameters and returns the sum, difference, multiplication and division of these numbers Create a main () function that uses the above class.
// PROGRAM
#include <iostream>
using namespace std;

class Calculator 
{
public:
    float add(float a, float b) 
    {
        return a + b;
    }
    float sub(float a, float b) 
    {
        return a - b;
    }
    float mul(float a, float b) 
    {
        return a * b;
    }
    float div(float a, float b) 
    {
        if (b != 0) 
        {
            return a / b;
        } 
        else 
        {
            cout << "Error! Division by zero." << endl;
            return 0;
        }
    }
};

int main() 
{
    Calculator calc;
    float num1, num2;
    cout << "Enter two numbers" << "\nNumber 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    cout << "Sum: " << calc.add(num1, num2) << endl;
    cout << "Difference: " << calc.sub(num1, num2) << endl;
    cout << "Multiplication: " << calc.mul(num1, num2) << endl;
    cout << "Division: " << calc.div(num1, num2) << endl;
    return 0;
}
