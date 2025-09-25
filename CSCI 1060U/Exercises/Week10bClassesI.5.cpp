#include <iostream>
#include <cmath>
using namespace std;

/*Create a class named "Car" with members 
for car make, model, and year. 
Write member functions to set and display the car details. 
Test the class by creating an object, 
setting the details, 
and displaying the car details on the console.*/

class Car{
    public:
    string make;
    string model;
    int year;
    void makeSet(){
        cout << "What is the make of your car?" << endl;
        cin >> make;
    }
    void modelSet(){
        cout << "What is the model of your car?" << endl;
        cin >> model;
    }
    void yearSet(){
        cout << "What is the year of your car?" << endl;
        cin >> year;
    }
};

int main(){
    Car car;
    car.makeSet();
    car.modelSet();
    car.yearSet();
    cout << "Car Make: " << car.make << endl;
    cout << "Car Model: " << car.model << endl;
    cout << "Car Year: " << car.year << endl;
    return 0;
}