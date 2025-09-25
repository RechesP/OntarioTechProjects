/*Write a program that declares a character variable and a pointer to that variable. 
Assign a character to the variable and use the pointer to access and print its ASCII value.*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    char vari = 'a';
    char *p = &vari;
    int chr = *p;
    cout << chr << endl;
}