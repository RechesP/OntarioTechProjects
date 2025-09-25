/*Prompt the user for a number. 
Dynamically create an array that contains that many strings, 
then ask the user to write words to fill the array. 
Then, print out those words in order.*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    cout << "How many words would you like to enter?" << endl;
    int size;
    cin >> size;
    string* strArr = new string[size];
    for (int i = 0; i < size; i++){
        cin >> strArr[i];
    }
    for (int i = 0; i < size; i++){
        cout << strArr[i] << " ";
    }
    cout << endl;
}