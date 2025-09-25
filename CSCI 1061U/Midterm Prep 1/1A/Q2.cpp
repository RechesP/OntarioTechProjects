#include <iostream>
#include <string>
using namespace std;

int *merge(int arr1[], int arr2[], int size1, int size2, int pos){
    if( pos < 0 || pos > size1)
        return NULL; //Not a valid position
    int i = 0, i1 = 0, i2 = 0;
    int *result = new int[size1+size2];
    for( i = 0, i1 = 0; i1 < pos; ++i, ++i1) // 1st part
        result[i] = arr1[i1];
    for( i2 = 0; i2 < size2; ++i, ++i2) // 2nd part
        result[i] = arr2[i2];
    for( i = pos+size2; i1 < size1+size2; ++i, ++i1) // 3rd part
        result[i] = arr1[i1];
    return result;
}

int main(){
    int arr1[4] = {1,2,3,4};
    int size1 = 4;
    int arr2[3] = {5,6,7};
    int size2 = 3;
    cout << "arr1: [";
    for (int i = 0; i < size1; i++){
        cout << arr1[i] << ",";
    }
    cout << "]" << endl;
    cout << "arr2: [";
    for (int i = 0; i < size2; i++){
        cout << arr2[i] << ",";
    }
    cout << "]" << endl;
    int pos = 2;
    int *arr3 = new int[size1+size2];
    arr3 = merge(arr1, arr2, size1, size2, pos);
    cout << "arr3: [";
    for (int i = 0; i < size2+size1; i++){
        cout << arr3[i] << ",";
    }
    cout << "]" << endl;
}