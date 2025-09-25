#include <iostream>
#include <cmath>
#include "point.h"
using namespace std;

// constructor
Point::Point(double a, double b){
    cout << "Creating point..." << endl;
    x = a;
    y = b;
}

// methods
double Point::distance_to(const Point &other){
    double d = sqrt(pow((y - other.y),2) + pow((x - other.x),2));
    return d;
}

// operator overloading
ostream &operator<<(ostream &os, const Point &obj){
    os << "(" << obj.x << ", " << obj.y << ")";
    return os;
}