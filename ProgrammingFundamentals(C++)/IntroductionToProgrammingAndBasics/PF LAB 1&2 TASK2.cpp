// TASK #2 Write a C++ program in which declare some variables with valid identifiers and conventions rule, 
// to hold your name, your total marks in previous semester, percentage, your grade, your status of pass or 
// fail etc, assign them explicitly and print them. Try to declare 
// variables of all (8) data types and assign the appropriate values.
#include <iostream>
using namespace std;
int main() 
{
    string studentName = "John Doe";           
    int totalMarks = 480;                     
    float percentage = 76.8;                  
    char grade = 'B';                         
    bool isPassed = true;                  
    long longVar = 987654321;                 
    double largeDecimal = 12345.6789;
    unsigned int positiveNumber = 100;        
    cout << "----- Student Information -----" << endl;
    cout << "Name: " << studentName << endl;
    cout << "Total Marks: " << totalMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Pass Status: " << (isPassed ? "Pass" : "Fail") << endl;
    cout << "\n----- Example of All Data Types -----" << endl;
    cout << "Long Variable: " << longVar << endl;
    cout << "Double Variable: " << largeDecimal << endl;
    cout << "Unsigned Int Variable: " << positiveNumber << endl;
    return 0;
}
