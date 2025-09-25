#include <iostream>
#include <cmath>
#include "point.h"
using namespace std;

int main(){
    Point p1 = Point(3.5,4.0);
    Point p2 = Point(-5.1, 10.8);
    
    cout << "Point 1: " << p1 << endl;
    cout << "Point 2: " << p2 << endl;
    cout << "The distance between the points is " << p1.distance_to(p2) << endl;
}