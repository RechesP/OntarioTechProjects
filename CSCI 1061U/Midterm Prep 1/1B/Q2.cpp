#include <iostream>
#include <string>
using namespace std;

int count(string text, char letter) {
    int amount = 0;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == letter)
            amount += 1;
    }
    return amount;
}

int main(){
    char letter = 'e';
    string text = "Good morning, and in case I don't see ya, good afternoon, good evening, and good night!";
    cout << "There are " << count(text, letter) << " " << letter << "s in the string \"" << text << "\"" << endl;
}