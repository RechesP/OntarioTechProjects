#include <iostream>
const int Len = 66;
const int Divs = 6;
void subdivide(char ar[], int low, int high, int level)
{
    if (level == 0)
        return;

    // missing line of code
    ar[(low + high)/2] = '|';
    subdivide(ar, (low + high)/2, high, level-1);
    subdivide(ar, low, (low + high)/2, level-1);
    return subdivide(ar, low/2, high/2, level-1);

}

int main()
{
    char ruler[Len];
    int i;
    for (i = 1; i < Len - 2; i++)
        ruler[i] = ' ';
    ruler[Len - 1] = '\0';
    int max = Len - 2;
    int min = 0;
    ruler[min] = ruler[max] = '|';
    std::cout << ruler << std::endl;
    for (i = 1; i <= Divs; i++)
    {
        subdivide(ruler, min, max, i);
        std::cout << ruler << std::endl;
        for (int j = 1; j < Len - 2; j++)
            ruler[j] = ' '; // reset to blank ruler
    }
    return 0;
}