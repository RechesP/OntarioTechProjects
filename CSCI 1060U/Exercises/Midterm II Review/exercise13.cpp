/*Write a C++ function that reverses a string using pointers.*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    string str = "Hello there!";
    char *ptr1 = &str[0];
    char *ptr2 = &str[str.length() -1];
    while(ptr1 < ptr2){
        char temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2--;
    }
    cout << str << endl;
}