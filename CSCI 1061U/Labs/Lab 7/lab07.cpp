#include <iostream>
#include <vector>
using namespace std;

class Student{
public:
    string name;
    char level;
    void setName(string n){
        name = n;
    }
    void setLevel(char l){
        level = l;
    }
};

class Undergraduate : public Student{
public:
    double CGPA;
    void setCGPA(double gp){
        CGPA = gp;
    }
    void showDetails(){
        std::cout << "Name: " << name << std::endl;
        std::cout << "Level: " << level << std::endl;
        std::cout << "CGPA: " << CGPA << std::endl;
    }
};

class Graduate : public Student{
public:
    string specialization;
    void setSpecialization(string s){
        specialization = s;
    }
    void showDetails(){
        std::cout << "Name: " << name << std::endl;
        std::cout << "Level: " << level << std::endl;
        std::cout << "Specialization: " << specialization << std::endl;
    }
};

void display(vector<Undergraduate> &students){
    for(Undergraduate s : students){
        s.showDetails();
        std::cout << std::endl;
    }
}

void display(vector<Graduate>&students){
    for(Graduate s : students){
        s.showDetails();
        std::cout << std::endl;
    }
}

int main() {
    char choice;
    string name;
    char level;
    vector<Undergraduate> undergrads;
    vector<Graduate> graduates;
    
    do{
        cout << "\nEnter Student's Full Name: ";
        //cin.ignore(); // Clear the buffer
        getline(cin, name);
        
        cout <<"Enter Level of Student (G = Graduate, U = Undergraduate): ";
        cin >> level;
        level = toupper(level);
        cin.ignore(); // Clear the buffer
        
        if (level == 'U')
        {
            Undergraduate undergraduate;
            double cgpa;
            
            undergraduate.setName(name);
            undergraduate.setLevel(level);
            cout <<"Enter CGPA: ";
            cin >>cgpa;
            undergraduate.setCGPA(cgpa);
            
            undergrads.push_back(undergraduate);
        }
        else if (level == 'G')
        {
            Graduate graduate;
            string specialization;
            
            graduate.setName(name);
            graduate.setLevel(level);
            cout <<"Enter Specialization: ";
            getline(cin, specialization);
            graduate.setSpecialization(specialization);
            
            graduates.push_back(graduate);
        }
        
        cout << "\nDo you want to continue (Y/N)? ";
        cin >> choice;
        cin.ignore(); // Clear the buffer
        
    } while (choice == 'y' || choice == 'Y');
    
    cout <<"\nList of Graduate Students...."<<endl;
    cout <<"*******************************"<<endl;
    display(graduates);
    
    cout <<"\nList of Undergraduate Students...."<<endl;
    cout <<"*******************************"<<endl;
    display(undergrads);
    
    return 0;
}