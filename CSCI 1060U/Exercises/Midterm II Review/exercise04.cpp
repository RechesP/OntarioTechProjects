/*Create a dynamic array of size 10 in C++ 
and initialize it with values from 1 to 10.*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    int *Arr = new int[10];
    for (int i = 0; i < 10; i++){
        Arr[i] = i + 1;
    }
    for (int i = 0; i < 10; i++){
        cout << Arr[i] << endl;;
    }
}