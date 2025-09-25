// 25/01/2024 
// Reches P.
// lab02.cpp.1.0

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class WordCounter{
    public:
        string word;
        int count;
        
        WordCounter(){}
        WordCounter(string Word){
            this->word = Word;
            this->count = 1;
        }
        
        void get_wordCount(){
            cout << this->word << ": " << this->count << " times." << endl;
        }
        void get_word(){
            cout << "This variable is for the word " << this->word << endl;
        }
        void get_Count(){
            cout << "This variable has a count of " << this->count << endl;
        }
        
        void set_word(string word){
            this->word = word;
        }
        void set_count(int count){
            this->count = count;
        }
        void incrementWordCount(){
            this->count++;
        }
};

bool isFound(vector<WordCounter>& v, string word){
    for(WordCounter& i:v){
        if (word == i.word){
            i.incrementWordCount();
            // cout << i.count << endl;
            return true;
        }
    }
    return false;
}

void printReport(vector<WordCounter>& v){
    cout << "Word Count Report:" << endl;
    for (WordCounter i:v){
        i.get_wordCount();
    }
}

int main(){
    ifstream input;
    string text;
    vector<WordCounter> wordVector;
    input.open("data.txt");
    while(input >> text){
        if (isFound(wordVector, text) == false){
            WordCounter word = WordCounter(text);
            wordVector.push_back(word);
        }
    }
    input.close();
    printReport(wordVector);
}