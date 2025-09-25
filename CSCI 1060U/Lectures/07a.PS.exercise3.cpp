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
    
    bool swap;
    do{
        swap = false;
        for(int i = 0; i < 4; i++){
            if (randArr[i] > randArr[i + 1]){
                int temp = randArr[i];
                randArr[i] = randArr[i + 1];
                randArr[i + 1] = temp;
                swap = true;
            }
        }
    }while(swap != false);
    
    cout << "sorted:" << endl;
    for (int i = 0; i < 5 ; i++){
        cout << randArr[i] << endl;
    }
    return 0;
}