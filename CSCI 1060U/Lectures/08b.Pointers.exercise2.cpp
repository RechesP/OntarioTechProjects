# include <iostream>
# include <string>
# include <fstream>
using namespace std;

double *maxVal(double array[], int size){
    double *max = array;
    for(int i  = 0; i < size; i++){
        if (*max < array[i]){
            //max = &array[i];
            max = array + i;
        }
    }
    return max;
}

int main(){
    double array[] = {4.6,7.8,9.9,22.2,4.5};
    double *p = maxVal(array,5);
    cout << *p << endl;
    
    return 0;
}