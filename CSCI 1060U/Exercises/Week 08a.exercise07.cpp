/*Write a program that declares a constant integer variable 
and a pointer to that constant. 
Assign a value to the variable 
and use the pointer to access 
and print its value.*/
    
# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    int vari = 9;
    int *p = &vari;
    cout << *p << endl;
}