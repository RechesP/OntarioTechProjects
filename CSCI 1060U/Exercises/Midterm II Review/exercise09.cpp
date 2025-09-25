/*Write a C++ function that takes a pointer to a character array (string) and converts it to uppercase.*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

string *pointerUp(string *Arr){
    for(int i = 0; i < length(Arr); i++){
        Arr[i] = toupper(Arr[i]);
    }
    return Arr;
}

int main(){
    string str = "a,b,c,d,e";
    string *ptr = &str;
    pointerUp(ptr);
    cout << *ptr << endl;
}