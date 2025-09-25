# include <iostream>
# include <string>
# include <fstream>
using namespace std;

//char *charInString(string myString, char *myCharPointer){
char *charInString(char *myString, char *myCharPointer, int size){
    for (int i = 0; i < size; i++){
        if (*myCharPointer == myString[i]){
            return &myString[i];
        }
    }
}

int main(){
    char *myStr = "Hello There!";
    char myChar = 'o';
    char *p1 = &myChar;
    char *p2 = charInString(myStr, p1,/*sizeof(myStr)/sizeof(myStr[0])*/12);
    
    return 0;
}