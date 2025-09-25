# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    int array[] = {1,2,3,4,5,6};
    int *p;
    p = array+3;
    //cout << *p << endl;
    //cout << "p[-2] = " << p[-2] << endl;
    
    for (int i = -1; i < 2; i++){
      cout << "p[" << i << "] = " << p[i] << endl;
    }
}