# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    ofstream myoutput;
    myoutput.open("data.txt", ios::app);
    
    cout << "Enter a sentence" << endl;
    string userstring;
    getline(cin, userstring);
    myoutput << userstring;
    myoutput << endl;
    myoutput.close();
}