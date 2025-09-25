/*Continuing from the previous exercise, 
prompt the user to enter a word from the array. 
Create a new dynamic array that has all the words from the array 
*except* the one they just entered, 
and delete the old array.*/

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
    
    for (int i = 0; i < (number_of_words - 1); i++){
        cout << strptr[i] << " ";
    }
    cout << endl;
    
    cout << "Enter a word from the array:" << endl;
    cin >> their_input;
    string* strptr2 = new string[number_of_words-1];
    int j = 0; //index for new string pointer
    for (int i = 0; i < number_of_words; i++){ //index for old string pointer
        if (strptr[i] != their_input){
            strptr2[j] = strptr[i];
            j++;
        }
    }
    
    delet[] strptr;
    
    for (int i = 0; i < number_of_words-1; i++){
        cout << strptr2[i] << " ";
    }
    cout << endl;
}