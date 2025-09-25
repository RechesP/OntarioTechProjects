//Reches P. Lab 09 2.0
//21.03.2024

#include <iostream>
#include <vector>
#include <stdexcept>
#include <array>
using namespace std;

template <class T>

class Array {
private:
    T* elements;
    int capacity;
    int size;
public:
    Array(int initialCapacity)
    {
        size = 0;
        capacity = initialCapacity;
        elements = new T[capacity];
    }
    void add(const T& element)
    {
        if (size >= capacity){
            throw out_of_range("Array is full");
        }
        else
        {
            elements[size++] = element;
        }
    }
    T& get(int index)
    {
        if (index < 0 || index >= size)
        {
            throw out_of_range("index out of range");
        }
        else
        {
           return elements[index]; 
        }
    }
    int getSize()
    {
        return size;
    }
};

class Student {
private:
    string name;
public:
    Student()
    {
        name = "";
    }
    Student(const string& n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
};

class Faculty {
private:
    string name;
public:
    Faculty()
    {
        name = "";
    }
    Faculty(const string& n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
};

// template<typename T>
// void displayArray(Array<T>& arr)
// { 
//     for (int i = 0; i < arr.getSize(); i++)
//     {
//         cout << arr.get(i).getName() << endl;
//     }
// }

template<typename T, size_t N>
void displayArray(std::array<T, N>& arr)
{ 
    for (size_t i = 0; i < N; i++)
    {
        cout << arr[i].getName() << endl;
    }
}

int main()
{
//     Array<Student> studentArray(5);
//     Array<Faculty> facultyArray(5);
    
//     // Adding some students
//     studentArray.add(Student("Alice"));
//     studentArray.add(Student("Bob"));
//     studentArray.add(Student("Charlie"));
    
//     // Adding some faculty
//     facultyArray.add(Faculty("Dr. Smith"));
//     facultyArray.add(Faculty("Prof. Johnson"));
    
//     // Displaying students
//     cout << "List of Students:" << endl;
//     for (int i = 0; i < studentArray.getSize(); i++)
//     {
//         cout << studentArray.get(i).getName() << endl;
//     }
    
//     // Displaying faculty
//     cout << "\nList of Faculty:" << endl;
//     for (int i = 0; i < facultyArray.getSize(); i++)
//     {
//         cout << facultyArray.get(i).getName() << endl;
//     }
    
    array<Student, 5> studentArray = { Student("Elon"), Student("Warren"), Student("Lizzy"), Student("Maria"), Student("Tony")};
    array<Faculty, 3> facultyArray = {Faculty("Prof. Steve"), Faculty("Prof. Bill"), Faculty("Prof. Tim")};
    
    // Displaying students
    cout << "List of Students:" << endl;
    displayArray(studentArray);
    
    // Displaying faculty
    cout << "\nList of Faculty:" << endl;
    displayArray(facultyArray);
    
    return 0;
}
