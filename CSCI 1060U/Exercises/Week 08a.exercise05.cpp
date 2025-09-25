# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    int myInt = 7;
    int *p = &myInt;
    int **ptp = &p;
    cout << **ptp << endl;
}