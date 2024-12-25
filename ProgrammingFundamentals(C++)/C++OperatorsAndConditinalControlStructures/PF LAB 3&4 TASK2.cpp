// Task #2: A student will not be allowed to sit in exam if his/her attendance is less than 75%.

// Take following input from user
// Number of classes held
// Number of classes attended.
// And print
// percentage of class attended
// Is student is allowed to sit in exam or not.
// PROGRAM
#include <iostream>
using namespace std;
int main() 
{
    int classesHeld, classesAttended;
    cout << "Enter the number of classes held: ";
    cin >> classesHeld;
    cout << "Enter the number of classes attended: ";
    cin >> classesAttended;
    float attendancePercentage = (float(classesAttended) / classesHeld) * 100;
    cout << "Percentage of classes attended: " << attendancePercentage << "%" << endl;
    if (attendancePercentage >= 75) 
    {
        cout << "The student is allowed to sit in the exam." << endl;
    } 
    else 
    {
        cout << "The student is not allowed to sit in the exam." << endl;
    }
    return 0;
}
