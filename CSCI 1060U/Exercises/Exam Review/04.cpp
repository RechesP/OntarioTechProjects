/*Write a C++ program that asks the user to enter a positive integer and 
determines whether there are an odd or even number of unique positive divisors for that integer. 
For example, if the integer provided is 10, 
the program should display Divisor count is Even, 
since there are four divisors of 10 (1, 2, 5, and 10) and four is even. 

Similarly, if the integer provided is 4, the program should display Divisor count is not Even, 
since there are three divisors of 4 (1, 2 and 4) and three is not even.

Your program should have the function int numberOfDivisors(int number) that takes an integer number and returns the number of unique divisors for that integer. Use this function in your main function to solve the problem.

Below are a couple of examples of output from this program:

Enter a positive integer: 6
Divisor count is Even

Enter a positive integer: 9
Divisor count is not Even
*/

#include <iostream>
using namespace std;

int numberOfDivisors(int number){
    int divisors = 0 ;
    for (int i = 1; i < number+1; i++){
        if (number%i == 0){
            divisors++;
        }
    }
    return divisors;
}

int main(){
    int number;
    int divisors;
    cout << "Please enter a positinve interger: ";
    cin >> number;
    divisors = numberOfDivisors(number);
    if(divisors%2 == 0){
        cout << "Divisor count is Even" << endl;
    }
    else{
        cout << "Divisor count is Odd" << endl;
    }
    return 0;
}
