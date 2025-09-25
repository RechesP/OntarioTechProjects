/*Write a C++ function called binarySearch that:
Takes in an array and the size of the array.
Searches for a target integer using binary search.
Returns the index of the target integer if found, and -1 otherwise.*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int binarySearch(int Arr[], int size){
    int target = 4;
    int low = 0;
    int high = size - 1;
    int mid = (low + high)/2;
    
    while(low <= high){
        if (Arr[mid] == target){
            return mid;
        }
        if (target < Arr[mid]){
            high = mid - 1;
            mid = (low + high)/2;
        }
        else{
            low = mid - 1;
            mid = (low + high)/2;
        }
    }
    return -1;
}

int main(){
    int Arr[] = {1,2,3,4,5,6,7};
    if (binarySearch(Arr,7) > -1){
        cout << "Founnd target at " << binarySearch(Arr,7) << endl;
    }
    else{
        cout << "Target not found" << endl;
    }
    
}