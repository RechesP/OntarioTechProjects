# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main() {

    int i = 12;
    int *p1;
    p1 = &i;
    *p1 = 24;
    cout << *p1 << ' ' << i << endl;

    return 0;
}