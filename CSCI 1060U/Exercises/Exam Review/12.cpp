#include <iostream>
#include <string>

using namespace std;

void getFirstWord(string *ptr) //YOU MAY NOT CHANGE THIS LINE
{
    string *str1;
    *str1 = (ptr->substr(0, 12));
    cout << *str1;
}
int main()
{
    string str = "Introduction to Programming";
    string* strPtr = &str;
    getFirstWord(strPtr);
    
    return 0;
}
