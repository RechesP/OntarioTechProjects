/*Write a C++ function called linearSearch that:
Takes in a pointer to the beginning of an array, and the size of the array.
Searches for a target integer using linear search.
Returns a pointer to the target integer if found, and nullptr otherwise.*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int LinearSearch(int *Arr, int size){
    int target = 3;
    for(int i = 0; i < size; i++){
        if(Arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int Arr[] = {1,2,3,4,5,6,7};
    int *ptr = &Arr[0];
    if (LinearSearch(ptr,7) > -1){
        cout << "Founnd target at " << LinearSearch(ptr,7) << endl;
    }
    else{
        cout << "Target not found" << endl;
    }
    
}