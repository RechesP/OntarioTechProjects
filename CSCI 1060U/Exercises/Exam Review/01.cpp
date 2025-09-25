#include <iostream>
using namespace std;
int main()
{
    int number;
    int result;
    cout << "Enter a number: ";
    cin >> number;

    result = 10 * (3 * (number * number) + 7);
    cout << "Result: " << result << endl;
    return 0;
}
