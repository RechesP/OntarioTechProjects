/*Write a C++ function that swaps the values of two integers using pointers.*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    int x = 1; int y = 2;
    int *ptr1 = &x;
    int *ptr2 = &y;
    cout << "x = " << *ptr1 << " and y = " << *ptr2 << endl;
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
    cout << "x = " << *ptr1 << " and y = " << *ptr2 << endl;
}