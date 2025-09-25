#include <string>
#include <iostream>
#include "student.h"

Student::Student(double gpa, string id, string name){
    this->gpa = gpa;
    this->id = id;
    this->name = name;
}
Student higher(Student s1, Student s2){
    if (s1.gpa > s2.gpa) return s1;
    return s2;
}
bool Student::operator==(Student other){
    return id == other.id;
}