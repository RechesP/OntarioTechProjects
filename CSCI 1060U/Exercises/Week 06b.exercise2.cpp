# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    ifstream myinput;
    string theirstring;
    myinput.open("input.txt");
    
    cout << "contents of input.txt:\n";
    while(getline(myinput, theirstring)){
        cout << theirstring << "\n";
    }
    
    myinput.close();
}