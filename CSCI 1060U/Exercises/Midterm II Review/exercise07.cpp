/*Create a dynamic 2D array in C++ of size 3x3 and initialize it with all zeroes.*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    int** arr = new int*[3];
    for(int i = 0; i < 3; i++){
        arr[i] = new int[3];
        for(int i = 0; i < 3; i++){
            arr[i] = 0;
            cout << arr[i] << ",";
        }
        cout << endl;
    }
}