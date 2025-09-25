# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6};
    int *p = arr;
    for (int i = 0; i < 6; i++){
      p = &arr[i];
      cout << "p[" << i << "]: " << *p << endl;
    }
}