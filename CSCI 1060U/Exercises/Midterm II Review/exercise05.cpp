/*Write a C++ program to find the largest number in an array using pointers.*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    int Arr [5] = {1,3,5,2,6};
    int *ptr = Arr;
    for(int i = 1; i < 5; i++){
        if (Arr[i] > *ptr){
            ptr = Arr + i;
        }
    }
    cout << *ptr << endl;
}