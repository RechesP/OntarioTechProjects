/*Write a C++ program to remove the 2nd occurrence of a number from a vector. 

Your program should have a function, RemoveSecondOccurrence that takes a vector and a number as arguments, 
and returns the new vector which contains all the numbers except 
the 2nd occurrence of the number you have specified as the second argument of the function. 

For example, if you supply a vector {1, 2, 3, 2, 5, 2, 7, 8, 9}  and a number 2 to the function RemoveSecondOccurrence then 
the function should return {1, 2, 3, 5, 2, 7, 8, 9} as a new vector which means the 2nd occurrence of 2 is removed from the new vector. 

Below is the expected output of the program for the input above:

Original Vector: 1, 2, 3, 2, 5, 2, 7, 8, 9

Removing second 2...

New Vector: 1, 2, 3, 5, 2, 7, 8, 9

For full marks, create the function above and call it in your main function. 

Make sure to submit the whole program (including main) to achieve the above task and not only the function.  

You may ONLY use the following libraries:

iostream
vector

*/

#include <vector>
#include <iostream>
using namespace std;

void RemoveSecondOccurrence(vector<int> &vec, int number)
{
    cout << "Removing second " << number << "..." << endl << endl;
    int occurence = 1;
    vector<int>::iterator iter = vec.begin()+1;
    for(int i : vec)
    {
        
        if (vec[i] == number)
        {
            if (occurence == 2)
            {
                vec.erase(iter);
            }
            occurence++;
        }
        iter++;
    }
}

int main()
{
    vector<int> vec = {1, 2, 3, 2, 5, 2, 7, 8, 9};
    cout << "Original Vector: ";
    for (int i = 0; i < 9; i++)
    {
        cout << vec[i];
        if ((i+1) < 9){
            cout << ',';
        }
    }
    cout << endl << endl;
    RemoveSecondOccurrence(vec, 2);
    cout << "New Vector: ";
    for (int i = 0; i < 8; i++)
    {
        cout << vec[i];
        if ((i+1) < 8){
            cout << ',';
        }
    }
    cout << endl << endl;
    return 0;
}
