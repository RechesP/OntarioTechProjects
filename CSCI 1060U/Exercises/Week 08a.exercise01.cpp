# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    int a = 6;
    int *p1;
    p1 = &a;
    cout << *p1 << endl;
}