/*Create a dynamic array that contains 5 strings. 
Ask the user for words and put them in the array until they type “STOP”. 
Whenever the array is full, create a new array that fits 5 more strings, 
add all the words entered so far to it, then delete the original array.*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    string* strptr = new string[5];
    string their_input;
    int number_of_words = 0;
    do{
        cout << "Please enter a word (or STOP to stop):" << endl;
        cin >> strptr[number_of_words];
        number_of_words++;
        
        if (number_of_words % 5 == 0){
            string* new_strptr = new string[number_of_words+5];
            
            for(int i = 0; i < number_of_words; i++){
                new_strptr[i] = strptr[i];
            }
            delete[] strptr;
            
            strptr = new_strptr;
        }
    }while(strptr[number_of_words-1] != "STOP");
    
    for (int i = 0; i < number_of_words; i++){
        cout << strptr[i] << endl;
    }
}