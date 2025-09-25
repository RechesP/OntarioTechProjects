/*Write a C++ program to read a file named "data.txt" and print its contents to the console.*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    ifstream input;
    string theirstring;
    input.open("data.txt");
    
    cout << "contents of data.txt:" << endl;
    while(getline(input, theirstring)){
        cout << theirstring << endl;
    }
    
    input.close();
}