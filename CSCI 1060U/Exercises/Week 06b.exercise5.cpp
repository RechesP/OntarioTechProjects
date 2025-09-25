# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    ifstream myinput;
    myinput.open("text.txt");
    
    string wordsToCount;
    int counted = 0;
    int space;
    while(getline(myinput, wordsToCount)){
        do{
            space = wordsToCount.find(' ');
            counted++;
            wordsToCount = wordsToCount.substr(space + 1, string::npos);
        }while(space != string::npos);
    }
    cout << "There are " << counted << " words in the text.txt\n";
    
    myinput.close();
}