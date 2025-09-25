/*Prompt the user for a number. 
Dynamically create an array that contains that many strings, 
then ask the user to write words to fill the array. 
Then, print out those words in order.*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    int num_of_words;
    cout << "How many words?" << endl;
    cin >> num_of_words;
    
    string* strptr = new string[num_of_words];
    
    for (int i = 0; i < num_of_words; i++){
        cout << "give me a word: ";
        cin >> strptr[i];
    }
    
    for (int i = 0; i < num_of_words; i++){
        cout << strptr[i] << endl;
    }
    
    return 0;
}