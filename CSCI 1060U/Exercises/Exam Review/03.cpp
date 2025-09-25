#include <iostream>
using namespace std;

int median(int x, int y, int z)
{
    if (y < x && x < z)
    {
        return x;
    }
    if (z < x && x < y)
    {
        return  x;
    }
    if (z < y && y < x)
    {
        return y;
    }
    if (x < y && y < z)
    {
        return y;
    }
    if (y < z && z < x)
    {
        return z;
    }
    if (x < z && z < y)
    {
        return z;
    }
    return 0;
}


int main()
{
    int x = 15;
    int y = 20;
    int z = 10;
    int med = median(x,y,z);
    cout << "median: " << med << endl;

    return 0;
}
