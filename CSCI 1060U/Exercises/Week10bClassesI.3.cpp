#include <iostream>
#include <cmath>
using namespace std;

/*Create a structure named "Employee" with members 
for employee name, employee ID, and salary. 
Prompt the user to enter information for five employees and 
store the data using the structure. 
Display the information of each employee on the console.*/

class Employee{
    public:
    string eName;
    int eID;
    float eSalary;
    void round(){
        eSalary = std::floor((eSalary * 100) + .5) / 100;
    }
};

int main(){
    cout << "Enter infromation for 5 employees." << endl;
    Employee eArr [5];
    cout << "Employee Names:" << endl;
    for (int i = 0; i < 5; i++){
        cout << "Employee " << i + 1 << " Name:" << endl;
        cin >> eArr[i].eName;
    }
    cout << "Employee IDs:" << endl;
    for (int i = 0; i < 5; i++){
        cout << "Employee " << i + 1 << " ID:" << endl;
        cin >> eArr[i].eID;
    }
    cout << "Salaries:" << endl;
    for (int i = 0; i < 5; i++){
        cout << "Employee " << i + 1 << " Salary:" << endl;
        cin >> eArr[i].eSalary;
        eArr[i].round();
    }
    for (int i = 0; i < 5; i++){
        cout << "Employee " << i + 1 << ": " << eArr[i].eName << ", " << eArr[i].eID << ", $" << eArr[i].eSalary << endl;
    }
}