#include <iostream>
using namespace std;

int main()
{
    string str = "InTroDuction to ProGramMing";

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] < 'a')
        {
            str[i] = tolower(str[i]);
        }
    }
    cout << "New String: " << str << endl;
    return 0;
}
