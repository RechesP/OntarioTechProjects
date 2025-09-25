/*Write a C++ function called insertionSort that:
Takes in an array and its size.
Sorts the array using insertion sort.*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

void insertionSort(int Arr[], int size){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (Arr[i] < Arr[j]){
                int  temp = Arr[i];
                Arr[i] = Arr[j]; 
                Arr[j] = temp;
            }
        }
    }
}

int main(){
    int Arr[10] = {1,3,5,7,9,2,4,6,8,10};
    cout << "Current Array:" << endl;
    cout << "{";
    for (int i = 0; i < 10; i++){
        if (i == 9){
            cout << Arr[i];
        }
        else{
            cout << Arr[i] << ",";
        }
    }
    cout << "}" << endl;
    insertionSort(Arr, 10);
    cout << "New Array:" << endl;
    cout << "{";
    for (int i = 0; i < 10; i++){
        if (i == 9){
            cout << Arr[i];
        }
        else{
            cout << Arr[i] << ",";
        }
    }
    cout << "}" << endl;
    return 0;
}