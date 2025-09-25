# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    srand(time(NULL));
    int randArr [1000];
    for (int i = 0; i < 1000; i++){
        randArr[i] = rand() % 1000;
    }
    
    int found = 0;
    int num;
    string toFind;
    cout << "what number do you want to look for in the array?\n";
    cin >> toFind;
    for (int i = 0; i < 1000; i++){
        if (randArr[i] == stoi(toFind)){
            cout << toFind << " was found at position " << i + 1 << " of the array.\n";
            found++;
        }
    }
    if (found == 0){
        cout << toFind << " was not found in the array.\n";
    }
    return 0;
}