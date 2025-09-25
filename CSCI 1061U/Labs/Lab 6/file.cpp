#include <iostream>
#include <fstream>
#include "file.h"
using namespace std;

void File::readDataFromFile(const string& filename){
    cout << "Current file content..." << endl;
    ifstream input;
    string text;
    input.open(filename);
    while(getline(input, text)){
        cout << text << endl;
    }
    input.close();
}
void File::writeDataToFile(const string& filename, const string& fruits){
    ofstream output;
    output.open(filename,ios::app);
    output << endl << fruits;
    output.close();
}