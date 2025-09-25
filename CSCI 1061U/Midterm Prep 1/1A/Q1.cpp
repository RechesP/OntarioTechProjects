#include <iostream>
#include <string>
using namespace std;

double calc( int a, int b ){
    if (b == 0){
      throw std::runtime_error("Divide By Zero Error!");
    }
    return (double) a / (double) b;
}

int main(){
    int x, y;
    double res;
    try
    {
        cout << "Enter two positive integers: ";
        cin >> x >> y;
        res = calc( x, y);
        cout << x << "/" << y << " = " << res << endl;
    }
    catch (const std::runtime_error& e)
    {
        cout << e.what() << endl;
    }
    catch(...) 
    {
        cout << "Unexpected exception! \n";
        return -1;
    }
    return 0;
}