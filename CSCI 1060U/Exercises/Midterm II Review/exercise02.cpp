/*Write a C++ function that takes a pointer to an integer and doubles its value.*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    int myInt = 6;
    int *ptr = &myInt;
    *ptr = *ptr * 2;
    cout << *ptr << endl;
}