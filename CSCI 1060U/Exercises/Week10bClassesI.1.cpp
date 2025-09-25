#include <iostream>
using namespace std;

/*Create a structure named "Student" with members 
for student name, student number, and grade. 
Prompt the user to enter information for three students and store the data using the structure. 
Display the information of each student on the console.*/

class Student{
    public:
    string sName;
    int sNumber;
    int sGrade;
};

int main(){
    cout << "Enter infromation for 3 students" << endl;
    Student sArr [3];
    cout << "Student Names:" << endl;
    for (int i = 0; i < 3; i++){
        cout << "Student " << i + 1 << " Name:" << endl;
        cin >> sArr[i].sName;
    }
    cout << "Student Numbers:" << endl;
    for (int i = 0; i < 3; i++){
        cout << "Student " << i + 1 << " Student Number:" << endl;
        cin >> sArr[i].sNumber;
    }
    cout << "Grade:" << endl;
    for (int i = 0; i < 3; i++){
        cout << "Student " << i + 1 << " Grade:" << endl;
        cin >> sArr[i].sGrade;
    }
    for (int i = 0; i < 3; i++){
        cout << "Student " << i + 1 << ": " << sArr[i].sName << ", " << sArr[i].sNumber << ", " << sArr[i].sGrade << "%" << endl;
    }
}