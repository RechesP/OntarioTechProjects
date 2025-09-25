//Reches P. Lab 08 2.0
//14.03.2024

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class Student
{
protected:
    string name;
    char level;
public:
    // void setName(string n)
    // {
    //     name = n;
    // }
    // void setLevel(char l)
    // {
    //     level = l;
    // }
    Student() : name(""), level('\0') {}
    Student(string n, char L) : name(n), level(L) {}
    
    virtual void showDetails() = 0;
    // void showDetails()
    // {
    //     cout <<"Name: "<<name<<endl;
    //     cout <<"Level: "<<level <<endl;
    // }
    char getLevel()
    {
        return level;
    }
};

class Undergraduate : public Student
{
private:
    double CGPA;
public:
    // void setCGPA(double cgpa)
    // {
    //     CGPA = cgpa;
    // }
    Undergraduate(string n, char L, double cgpa) : Student(n, L), CGPA(cgpa) {}

    void showDetails() override 
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Level: " << level << std::endl;
        std::cout << "CGPA: " << CGPA << std::endl;
    }
};

class Graduate : public Student
{
private:
    string specialization;
public:
    // void setSpecialization(string s)
    // {
    //     specialization = s;
    // }
    Graduate(string n, char L, string s) : Student(n, L), specialization(s) {}

    void showDetails() override 
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Level: " << level << std::endl;
        std::cout << "Specialization: " << specialization << std::endl;
    }
};

void display(vector<Student *> &students){
    int undergraduates = 0;
    int graduates = 0;
    for(Student* s : students){
        // ?\s->showDetails();
        if (s->getLevel() == 'U'){
            s->showDetails();
            undergraduates++;
        }
        else if (s->getLevel() == 'G'){
            s->showDetails();
            graduates++;
        }
    }
    
    cout << endl; 
    cout << "Total Graduate Students: " << graduates << endl;
    cout << "Total Undergraduate Students: " << undergraduates << endl;
}

int main() {
    char choice;
    string name;
    char level;
    vector<Student *> students;
    
    do {
        cout << "\nEnter Student's Full Name: ";
        //cin.ignore(); // Clear the buffer
        getline(cin, name);
        
        cout <<"Enter Level of Student (G = Graduate, U = Undergraduate): ";
        cin >> level;
        level = toupper(level);
        cin.ignore(); // Clear the buffer
        
        if (level == 'U')
        {
            double cgpa;
            
            cout <<"Enter CGPA: ";
            cin >>cgpa;
            
            // Create Undergraduate object using parameterized constructor.
            Undergraduate* undergraduate = new Undergraduate(name, level, cgpa);
            
            students.push_back(undergraduate);
        }
        else if (level == 'G')
        {
            string specialization;
            cout <<"Enter Specialization: ";
            getline(cin, specialization);
            
            // Create Graduate object using parameterized constructor.
            Graduate* graduate = new Graduate(name, level, specialization);
            
            students.push_back(graduate);
        }
        
        cout << "\nDo you want to continue (Y/N)? ";
        cin >> choice;
        cin.ignore(); // Clear the buffer
    
    } while (choice == 'y' || choice == 'Y');
    
    display(students);
    
    for (int i=0; i<students.size();i++)
    {
        delete students[i];
    }
    
    return 0;
}