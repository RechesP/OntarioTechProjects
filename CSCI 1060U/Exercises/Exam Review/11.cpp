#include <iostream>
using namespace std;
void evenOdd(int *even, int *odd, int array[], int size) //YOU MAY NOT CHANGE THIS LINE
{
    
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            *even += 1;
        }
        else
        {
            *odd += 1;
        }
    }
}
int main()
{
    int array[5] = { 1, 3, 6, 7, 8 };
    int even = 0, odd = 0;
    evenOdd(&even, &odd, array, 5);
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    return 0;
}
