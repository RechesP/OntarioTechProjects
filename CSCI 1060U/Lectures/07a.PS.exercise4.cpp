# include <iostream>
# include <string>
# include <fstream>
# include <cstdlib>
# include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int randArr [5];
    for (int i = 0; i < 5; i++){
        randArr[i] = rand() % 10;
    }
    
    cout << "unsorted:" << endl;
    for (int i = 0; i < 5 ; i++){
        cout << randArr[i] << endl;
    }
    
    cout << "sorted:" << endl;
    for(int i = 0; i < 5; i++){
        int minimum_index = i;
        for (int j = i+1; j < 5; j++){
            if (randArr[j] < randArr[minimum_index]){
                minimum_index = j;
            }
        }
        int temp = randArr[minimum_index];
        randArr[minimum_index] = randArr[i];
        randArr[i] = temp;
        cout << randArr[i] << endl;
    }
    return 0;
}