#include <iostream>
#include <cmath>
using namespace std;

/*Create a class named "BankAccount" with members 
for account number and balance. 
Write member functions to deposit and withdraw money from the account. 
Test the class by creating an object, 
performing multiple deposits and withdrawals, 
and displaying the updated balance on the console.*/

class BankAccount{
    public:
    int BAnum;
    float BAbalance;
    void deposit(float transaction){
        BAbalance = BAbalance + transaction;
        BAbalance = ((BAbalance * 100) + .5) / 100;
    }
    void withdraw(float transaction){
        BAbalance = BAbalance - transaction;
        BAbalance = ((BAbalance * 100) + .5) / 100;
    }
};

int main(){
    BankAccount Acc;
    Acc.BAnum = 100835796;
    Acc.BAbalance = 10000.00;
    int choice;
    float transaction;
    do{
        cout << "Bank Account Information:" << endl;
        cout << "Account Number: " << Acc.BAnum << endl;
        cout << "Balance: $";
        if ((Acc.BAbalance - int(Acc.BAbalance)) == 0){
            cout << Acc.BAbalance << ".00" << endl;
        }
        else{
            cout << Acc.BAbalance << endl;
        }
        cout << "What would you like to do?" << endl;
        cout << "1. Withdraw" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Quit" << endl;
        cin >> choice;
        if (choice == 1){
            cout << "How much would you like to withdraw?" << endl;
            cin >> transaction;
            Acc.withdraw(transaction);
        }
        if (choice == 2){
            cout << "How much would you like to deposit?" << endl;
            cin >> transaction;
            Acc.deposit(transaction);
        }
    }while(choice != 3);
    return 0;
}