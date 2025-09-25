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
    char getLevel(){
        return level;
    }
    void showDetails(){
        std::cout << "Name: " << name << std::endl;
        std::cout << "Level: " << level << std::endl;
    }
};

class Undergraduate : public Student{
public:
    double CGPA;
    void setCGPA(double gp){
        CGPA = gp;
    }
    // void showDetails(){
    //     std::cout << "Name: " << name << std::endl;
    //     std::cout << "Level: " << level << std::endl;
    //     std::cout << "CGPA: " << CGPA << std::endl;
    // }
};

class Graduate : public Student{
public:
    string specialization;
    void setSpecialization(string s){
        specialization = s;
    }
    // void showDetails(){
    //     std::cout << "Name: " << name << std::endl;
    //     std::cout << "Level: " << level << std::endl;
    //     std::cout << "Specialization: " << specialization << std::endl;
    // }
};

void display(vector<Student *> &students){
    int undergraduates = 0;
    int graduates = 0;
    for(Student* s : students){
        s->showDetails();
        if (s->getLevel() == 'U'){
            undergraduates++;
        }
        else if (s->getLevel() == 'G'){
            graduates++;
        }
    }
    
    cout << endl; 
    cout << "Total Graduate Students: " << graduates << endl;
    cout << "Total Undergraduate Students: " << undergraduates << endl;
}

// void display(vector<Graduate>&students){
//     for(Graduate s : students){
//         s.showDetails();
//         std::cout << std::endl;
//     }
// }

int main() {
    char choice;
    string name;
    char level;
    vector<Student *> students; // note this line as it is important for polymorphism concept
    
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
            Undergraduate* undergraduate = new Undergraduate(); // find reason why to create this pointer
            double cgpa;

            undergraduate->setName(name);
            undergraduate->setLevel(level);
            cout <<"Enter CGPA: ";
            cin >>cgpa;
            undergraduate->setCGPA(cgpa);
            
            students.push_back(undergraduate);
        
        }
        else if (level == 'G')
        {
            Graduate* graduate = new Graduate(); // find reason why to create this pointer
            string specialization;
            
            graduate->setName(name);
            graduate->setLevel(level);
            cout <<"Enter Specialization: ";
            getline(cin, specialization);
            graduate->setSpecialization(specialization);
            
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