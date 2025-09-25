/*Write a C++ function called selectionSort that:
Takes in a pointer to the beginning of an array, and the size of the array.
Sorts the array using selection sort.
Tip: You'll likely use pointer arithmetic.*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

void selectionSort(int *ptr, int size){
    for(int i = 0; i < size; i++){
        int small_ind = i;
        for (int j = i + 1; j < size; j++){
            if (*ptr + j) < ptr
        }
    }
}

int main(){
    int Arr[] = {1,3,5,7,2,4,6};
    int *ptr = &Arr[0];
    if (selectionSort(ptr,7) > -1){
        cout << "Founnd target at " << selectionSort(ptr,7) << endl;
    }
    else{
        cout << "Target not found" << endl;
    }
    
}