/*Write a C++ program that reads from a text file named animals.txt. The program should be able to read all the content from the text file and display that on the console. Please note the following:

Output the contents of the file without spaces, one character at a time. Do not use strings in your solution.

Assume that the file only contains animal names, each beginning with a capital letter.

Your program should be able to count the number of animals in the file and output it.

If one of the animals read in by your program starts with a capital "Z", the program should immediately output the message "Zoo time!" and terminate.

*/

# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main(){
    cout << "Opening file animals.txt..." << endl << endl;
    int animals = 0;
    char c;
    ifstream input;
    input.open("animals.txt");
    while(input >> c){
        cout << c;
        if (c >= 'A' && c <= 'Z'){
            animals++;
        }
        if (c == 'Z'){
            cout << endl << "Zoo time!" << endl;
            return 0;
        }
    }
    input.close();
    cout << endl << "There were " << animals << " animals in the file" << endl;
    return 0;
}
