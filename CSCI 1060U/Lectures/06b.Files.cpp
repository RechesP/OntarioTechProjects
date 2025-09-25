# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    ofstream myoutput;
    myoutput.open("Lecture6b.txt", ios::app);
    
    cout << "Print 5 numbers:" << endl;
    for (int i = 0; i < 5; i++){
        int theirnumber;
        cin >> theirnumber;
        myoutput << theirnumber;
        myoutput << endl;
    }
    
    ifstream myinput;
    myinput.open("Lecture6b.txt");
    
    cout << "your numbers were:\n";
    int theirnumber;
    while(myinput >> theirnumber){
        cout << theirnumber << endl;
    }
    
    myoutput.close();
    return 0;
}
