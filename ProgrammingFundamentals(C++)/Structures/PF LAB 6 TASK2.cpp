// Task # 2 Create a Structure called Students that contains two members: student’s obtained marks type(int), total marks (type int). Ask the user  for obtained marks and total marks, store it in a variable of type struct student, and then display the percentage.
// PROGRAM
#include <iostream>
using namespace std;

struct Student 
{
    int obtainedMarks;
    int totalMarks;
};

int main() 
{
    Student student;
    cout << "Enter the student's obtained marks: ";
    cin >> student.obtainedMarks;
    cout << "Enter the student's total marks: ";
    cin >> student.totalMarks;
    if (student.obtainedMarks > student.totalMarks || student.totalMarks == 0) 
    {
        cout << "Error: Total marks can't be lesser than obtained marks or zero" << endl;
    } 
    else 
    {
        float percentage = ((float)student.obtainedMarks / student.totalMarks) * 100;
        cout << "The student's percentage is: " << percentage << "%" << endl;
    }
    return 0;
}
