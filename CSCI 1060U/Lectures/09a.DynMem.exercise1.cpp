/*Write a program that initializes a double normally, 
and another double dynamically using a pointer. 
Assign values to those variables. 
Observe the behavior in PythonTutor.*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    double mydouble = 3.14;
    double *p1 = new double;
    //10.5
    *p1 = 10.5;
}