/*Write a program that declares a function pointer to a function that takes two integer parameters 
and returns their sum. 
Use the function pointer to call the function and print the result.*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int sum(int int1, int int2){
    return int1 + int2;
}

int main(){
    int int1 = 7;
    int int2 = 3;
    int sm = sum(int1, int2);
    int *p1 = &sm;
}