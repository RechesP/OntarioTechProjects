/*Write a program that declares an integer array. 
Use pointers to reverse the array elements 
and then print the reversed array.*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    int arr [5] = {1,2,3,4,5};
    int *p = arr;
    for (int i = 0; i < 3; i++){
        int temp = arr[i];
        arr[i] = p[4-i];
        p[4-i] = temp;
    }
    for (int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }
}