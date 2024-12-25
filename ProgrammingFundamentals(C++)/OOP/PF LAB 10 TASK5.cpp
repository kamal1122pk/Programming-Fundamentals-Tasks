
// TASK #5 Develop the Student Registration System by the object oriented scenarios. It should consist of two classes namely Student, and Course using OOP to write  a C++ Program to Store Information of a Student in a class.
// PROGRAM
#include <iostream>
#include <string>
using namespace std;
class Course 
{
private:
    string courseName;
    string courseCode;
public:
    void setCourseDetails(string name, string code) 
    {
        courseName = name;
        courseCode = code;
    }
    void displayCourseDetails() 
    {
        cout << "Course Name: " << courseName << ", Course Code: " << courseCode << endl;
    }
};
class Student 
{
private:
    string studentName;
    int studentID;
    Course course; 

public:
    void setStudentDetails(string name, int id, string courseName, string courseCode) 
    {
        studentName = name;
        studentID = id;
        course.setCourseDetails(courseName, courseCode); 
    }
    void displayStudentDetails() 
    {
        cout << "Student Name: " << studentName << ", Student ID: " << studentID << endl;
        course.displayCourseDetails(); 
    }
};
int main() 
{
    Student student1;
    string studentName, courseName, courseCode;
    int studentID;
    cout << "Enter student name: ";
    getline(cin, studentName);
    cout << "Enter student ID: ";
    cin >> studentID;
    cin.ignore(); 
    cout << "Enter course name: ";
    getline(cin, courseName);
    cout << "Enter course code: ";
    getline(cin, courseCode);
    student1.setStudentDetails(studentName, studentID, courseName, courseCode);
    cout << "\nStudent Registration Details:\n";
    student1.displayStudentDetails();
    return 0;
}
