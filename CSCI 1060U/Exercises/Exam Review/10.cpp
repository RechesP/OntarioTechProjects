/*Write a C++ program that finds the count of each number appearing in an array. 

For example, if you provide an array of size 10 with following items: { 1, 2, 3, 2, 1, 4, 2, 3, 1, 6 }, 
the output of the program should be as shown in the figure below:

1 appears 3 time(s)
2 appears 3 time(s)
3 appears 2 time(s)
4 appears 1 time(s)
6 appears 1 time(s)

Make sure your program has the following three functions:
int count_occurrences(int array[], int size, int number) that returns the number of times the number appears in the array

bool exists(int array[], int size, int number) that returns true if the number appears in the array.

void total_occurrences(int array[], int size) that displays the count of each number in an array. 

Call total_occurrences in your main method with an array of your choice to show that your code works.

It is optional, but not required, for you to sort the array if that makes solving the problem easier.

You may not use any built-in functions.
*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int count_occurrences(int array[], int size, int number)
{
    int occurrences = 0;
    for(int i = 0; i < size; i++)
    {
        if (array[i] == number) occurrences++;
    }
    return occurrences;
}

bool exists(int array[], int size, int number)
{
    for(int i = 0; i < size; i++)
    {
        if (array[i] == number) return true;
    }
    return false;
}

void total_occurrences(int array[], int size)
{
    int totaled [size];
    int occurrences;
    for(int i = 0; i < size; i++)
    {
        if (exists(totaled,size,array[i]) == false)
        {
            totaled[i] = array[i];
            occurrences = count_occurrences(array, size,array[i]);
            cout << array[i] << " appears " << occurrences << " time(s)" << endl;
            
        }
    }
}

int main()
{
    int array [] = { 1, 2, 3, 2, 1, 4, 2, 3, 1, 6 };
    total_occurrences(array, 10);
    return 0;
}
