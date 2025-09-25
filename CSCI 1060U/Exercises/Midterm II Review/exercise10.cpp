/*Write a C++ program that dynamically allocates an integer and assigns it a value of 5. Then deallocate this memory.*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    int *ptr = new int;
    *ptr = 5;
    cout << *ptr << endl;
    delete ptr;
}