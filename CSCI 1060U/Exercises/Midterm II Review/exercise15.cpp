/*Write a C++ program to dynamically allocate an array of integers, 
fill it with random values, 
print them, 
and then deallocate the memory.*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    int *Arr = new int[5];
    for (int i = 0; i < 5; i++){
        Arr[i] = 1 + i;
    }
    for (int i = 0; i < 5; i++){
        cout << Arr[i] << ",";
    }
    cout << endl;
    delete[] Arr;
}