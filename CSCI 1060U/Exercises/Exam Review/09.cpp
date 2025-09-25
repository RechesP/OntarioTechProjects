/*Write a C++ program that replaces all four-letter words in a phrase (e.g. “I love programming! It is so much fun!”) with four asterisks (****).  You can hard-code the phrase in your main function, but your program should work for any phrase. 

Your output should match the following:

Original phrase:
LOVE programming! It is so much fun!
Censored phrase:
**** programming! It is so **** fun!

Your program must include a function, void censorPhrase(string phrase) that takes the phrase as a parameter. 
It is recommended, but not required, that you create a function bool isLetter(char c) that determines if a given character is a letter.
The only built-in functions you may use are from the iostream and string libraries.
*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

bool isLetter(char c)
{
    if (c >= 'A' && c <= 'z'){
        return true;
    }
    return false;
}

void censorPhrase(string &phrase)
{
    int word = 0;
    for(int i = 0; i < phrase.length(); i++)
    {
        if (isLetter(phrase[i]))
        {
            word++;
        }
        if(word == 4 && isLetter(phrase[i+1]) == false)
        {
            phrase[i-3] = '*';
            phrase[i-2] = '*';
            phrase[i-1] = '*';
            phrase[i] = '*';
        }
        if(isLetter(phrase[i+1]) == false)
        {
            word = 0;
        }
    }
}

int main()
{
    string phrase = "This is a scale model of war. Every war ever fought, right there in front of you. Because it's always the same.\n\nWhen you fire that first shot, no matter how right you feel, you have no idea who's going to die!\n\nYou don't know whose children are going to scream and burn! How many hearts will be broken! How many lives shattered!\n\nHow much blood will spill until everybody does what they were always going to have to do from the very beginning.\n\nSit down and talk!";
    cout << "Original phrase: " << endl;
    cout << phrase << endl;
    censorPhrase(phrase);
    cout << "Censored phrase: " << endl;
    cout << phrase << endl;
    return 0;
}
