# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    int sorted [1000];
    for(int i = 0; i < 1000; i++){
        sorted[i] = i+1;
    }
    string toFind;
    cout << "what number do you want to look for in the array?\n";
    cin >> toFind;
    
    int lowest_index = 0;
    int highest_index = 1000;
    int mid = (highest_index + lowest_index)/2;
    int number = stoi(toFind);
    bool found = false;
        
    while(lowest_index <= highest_index){
        if (sorted[mid] == number){
            cout << toFind << " was found in the array at index " << mid << "\n" << endl;
            found = true;
        }
        if (number < sorted[mid]){
            highest_index = mid-1;
            mid = (highest_index + lowest_index)/2;
        } else{
            lowest_index = mid+1;
            mid = (highest_index + lowest_index)/2;
        }
    }
    if (found != true){
        cout << toFind << " was not found in the array\n" << endl;
    }
    return 0;
}