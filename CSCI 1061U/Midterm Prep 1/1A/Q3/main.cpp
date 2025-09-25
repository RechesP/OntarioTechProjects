#include <string>
#include <iostream>
#include "student.h"

int main(){
    Student s1 = Student(4.0,"101","Jeff");
    Student s2 = Student(2.0,"101","Geoff");
    
    cout << higher(s1,s2).name << endl;
    cout << (s1 == s2) << endl;
    return 0;
}