/*Write a function that takes an integer pointer as a parameter 
and increments the value it points to. 
Test the function by passing a variable, 
incrementing its value, 
and printing the result.*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int incrFunc(int *ptr){
    return *ptr + 1;
}

int main(){
    int vari = 9;
    int *p = &vari;
    cout << incrFunc(p) << endl;
}