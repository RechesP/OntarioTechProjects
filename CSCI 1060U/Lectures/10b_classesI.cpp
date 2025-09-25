#include <iostream>
using namespace std;

class Person{
    public:
        string firstName;
        string lastName;
        int age;
        bool isEmployed;
        bool isStudent;
        void cantWork(){
            if (age > 65 || age < 16){
                isEmployed = false;
            }
        }
};

Person creation(string firstName, string lastName, int age, bool isEmployed, bool isStudent){
    Person i;
    i.firstName = firstName;
    i.lastName = lastName;
    i.age = age;
    i.isEmployed = isEmployed;
    i.isStudent = isStudent;
    return i;
}

int main(){
    Person j = creation("John", "Smith", 14, true, true);
    j.cantWork();
    Person* peopleToucher;
    peopleToucher = &j;
    cout << peopleToucher->firstName << ", " << peopleToucher->lastName << ", " << peopleToucher->age << ", " << (peopleToucher->isEmployed ? "true" : "false") << ", " << (peopleToucher->isStudent ? "true" : "false") << ", " << endl;
}