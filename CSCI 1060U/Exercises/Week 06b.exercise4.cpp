# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    ifstream myinput;
    myinput.open("source.txt");
    ofstream myoutput;
    myoutput.open("destination.txt");
    
    string theirstring;
    while(getline(myinput, theirstring)){
        myoutput << theirstring << endl;
    }

    myoutput.close();
    myinput.close();
}