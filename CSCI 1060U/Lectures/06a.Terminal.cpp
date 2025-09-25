#include <iostream>
#include <string>

int main(){
    //#include <string>
    std::string greeting = "hello";
    greeting[2] = 'n';
    greeting;

    int countCharacters(string word){
        return word.length();
    }

    string word; = "Hello";

    /*Write a function named "findSubstring" that takes two strings as parameters: "mainString" and "subString". 
    The function should return the index of the first occurrence of "subString" in "mainString". 
    Use the find() method.*/
    // #include <iostream>
    // #include <string>
    using namespace std;

    int findSubstring(string mainString, string subString){
        return mainString.find(subString);
    }
    
    string sentence = "I am cheese"; string word = "cheese";
}