//Eric K. & Reches P. Lab09.10

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

/*
TODO: Set up a global variable: a pointer called bitSequences,
that will contain the bit Sequences in a string array,
initialized to nullptr
*/

string* bitSequences = nullptr;

//The number of bit sequences
int numSequences = 0;

/*
Given a filename, this function will initialize the program by reading in the bit sequences
inside, then storing them in a dynamic array. The global pointer bitSequences should point
to this array. The function will return the number of lines in the file.
    
*/
int readFile(const string& filename) {
    
    // TODO: Complete this function, including the following:
    // 1) Count how many lines there are in the file
    // 2) Create a new dynamic array that will fit that many bit sequences,
    //    then assign bitSequences to that array
    // 3) Read through the file a second time and put each line into your dynamic array
    // 4) Return the number of lines in the file
    
    ifstream file(filename);
    
    if (file.is_open()) {
        string text;
        while(getline(file, text)){
            numSequences++;
        }
        file.close();

        bitSequences = new string[numSequences];

        file.open(filename);
        for(int i = 0; i < numSequences; i++){
            file >> text;
            bitSequences[i] = text;
        }
        return numSequences;
    }

    return 0; // Return 0 if file cannot be opened
}

/*
This file takes a string of bits, which have been stuffed using the bit stuffing
algorithm, and a filename. It writes those bits to the file, overwriting whatever
was there previously.
*/
void writeFile(const string& filename, string stuffedBits) {
    ofstream file(filename);

    if (file.is_open()) {
        file << stuffedBits << endl;
        file.close();
    }
}

/*
This function searches through the bitSequences to find if the query matches any 
of the bitSequences, i.e. the query bits appear somewhere in a sequence. For 
each sequence the query appears in, the program should print out that it found 
that sequence.

e.g. using the default bit_sequences.txt, searchBitSequence("0101") should print:
Found bit sequence at index 0: 0101010101
Found bit sequence at index 3: 1010101010

*/
void searchBitSequence(const string& query) {
    //TODO: Complete this function
    for(int i = 0; i < numSequences; i++){
        string varuble = *(bitSequences + i);
        if (varuble.find(query) != string::npos){
            cout << "Found bit sequence at index " << i << ": " << varuble <<endl;
        }
            
    }
}

/*
This function should prompt the user to enter a new bit sequence, and add it
to the dynamic array of bit sequences. Since the array will not have sufficient
space to fit the new bit sequence, you will need to do the following:
1) Create a new dynamic array with enough space for all bit sequences, including
the newest one
2) copy all of the old bit sequences to the new array, as well as the new sequence
3) delete the old bit sequences (otherwise your program will have a memory leak)
4) update the number of bit sequences in your global variable

*/

void enterNewBitSequence() {
    //TODO: Complete this function
    string newSequence;
    cout << "what sequence would you like to add: ";
    cin >> newSequence;
    numSequences++;
    string* sqs2Arr = new string[numSequences];
    for (int i = 0; i < numSequences - 1; i++){
        sqs2Arr[i] = *(bitSequences + i);
    }
    sqs2Arr[numSequences-1] = newSequence;
    
    delete[] bitSequences;
    bitSequences = sqs2Arr;
    
}

/*
This function should print out all bit sequences in order.
*/
void viewAllBitSequences() {
    //TODO: Complete this function.
    cout << "Bit Sequences:" << endl;
    for(int i = 0; i < numSequences; i++){
        cout << i << ": " << *(bitSequences + i) << endl;
    }
}

/*
This function will perform bit stuffing on the existing bit sequences.
You will need to do the following:
1) For each bit sequence, add one bit at a time to the result string. If you 
add five consecutive ones, immediately 'stuff' the string by adding an extra 0.
2) After adding a bit sequence, add the delimiter to the result.

*/

string performBitStuffing() {
    string delimiter = "01111110";
    string result = "";

    //TODO: Complete this function
    for (int i = 0; i < numSequences; i++){
        
        string temp = *(bitSequences + i);
        for(int j = 0; j < temp.length(); j++){
            if (temp.find("11111",j) != string::npos){
                int index = temp.find("11111",j);
                temp.insert(index+5,"0");
                j = index + 5;
            }    
         }
        result.append(temp);
        result.append(delimiter);
    }
    return result;
}

/*
This function will read the data_transfer.txt file and parse through the information.
It will look for the delimiter of "01111110" to separate the bits into different bit sequences.
Once the data has been separated by sequence, each sequence will be 'destuffed' by removing 
any 0 that appears after five 1s. 
The correct data will be stored in the bit sequences dynamic array.

*/

void destuffBitSequence() {
    ifstream file("data_transfer.txt");

    if (file.is_open()) {
        //Since the file only contains a single line of 0s and 1s, one getline
        //is sufficient to collect all of the data, which then needs to be parsed.
        string fileContent;
        getline(file, fileContent);
        file.close();

        string delimiter = "01111110";
        
        //Update the number of sequences
        numSequences = 0;
        int lastDelim = fileContent.find(delimiter);
        while (lastDelim != string::npos){
            numSequences++;
            
            //move to the next delimiter in the data. There should be a number 
            //of delimiters equal to the number of sequences.
            lastDelim = fileContent.find(delimiter, lastDelim + delimiter.length());
        }
        
        //TODO: Delete the old bit sequences and create a new dynamic array to fit the
        //new sequences
        
        delete[] bitSequences;
        bitSequences = new string[numSequences];

        int startPos = 0;
        int endPos = fileContent.find(delimiter);
        int i = 0;
        while (endPos != string::npos) {
            string sequence = fileContent.substr(startPos, endPos - startPos);

            //TODO: Add the sequence to the dynamic array. You may
            //need an additional variable outside the loop to keep track of 
            //the index.
            bitSequences[i] = sequence;
            i++;

            startPos = endPos + delimiter.length();
            endPos = fileContent.find(delimiter, startPos);
        }

        // TODO: Destuff the bit sequence. 
        //You must remove any excess zeros after five consecutive ones
        for (int i = 0; i < numSequences; i++){
            string temp = *(bitSequences + i);
            for(int j = 0; j < temp.length(); j++){
                if (temp.find("111110",j) != string::npos){
                    int index = temp.find("111110",j);
                    temp = temp.erase(index+5,1);
                    cout << temp << endl;
                    j = index + 4;
                }    
             }
            *(bitSequences + i) = temp;
        }
        
    } else {
        cout << "Failed to open file: data_transfer.txt" << endl;
    }
}

int main() {
    string filename = "bit_sequences.txt";
    string transferFilename = "data_transfer.txt";
    string option;

    numSequences = readFile(filename);

    while (true) {
        cout << "Options:\n";
        cout << "1. Search bit sequences for a substring\n";
        cout << "2. Enter a new bit sequence\n";
        cout << "3. View all bit sequences\n";
        cout << "4. Examine stuffed bit sequence\n";
        cout << "5. Store stuffed bit sequence to file\n";
        cout << "6. Destuff bit sequence from file\n";
        cout << "Enter your option (or 'q' to quit): ";

        cin >> option;

        if (option == "1") {
            string query;
            cout << "Enter the substring to search for: ";
            cin >> query;
            searchBitSequence(query);
        } else if (option == "2") {
            enterNewBitSequence();
        } else if (option == "3") {
            viewAllBitSequences();
        } else if (option == "4") {
            string stuffedData = performBitStuffing();
            cout << "Bit-stuffed data: " << stuffedData << endl;
        } else if (option == "5") {
            string stuffedData = performBitStuffing();
            cout << "Generated data: " << stuffedData << endl;
            writeFile(transferFilename, stuffedData);
            cout << "Data written to file: " << transferFilename << endl;
        } else if (option == "6") {
            cout << "Destuffing bit sequences... ";
            destuffBitSequence();
            cout << "Destuffed. " << endl;
            viewAllBitSequences();
        } else if (option == "q") {
            break;
        } else {
            cout << "Invalid option. Please try again.\n";
        }

        cout << endl;
    }

    //TODO: Delete the bit sequence array.

    return 0;
}