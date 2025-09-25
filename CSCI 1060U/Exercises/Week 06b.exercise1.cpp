# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    ofstream myoutput;
    myoutput.open("output.txt");
    
    cout << "Write a sentence" << endl;
    string userstring;
    getline(cin, userstring);
    myoutput << userstring;
    myoutput << endl;
    myoutput.close();
}