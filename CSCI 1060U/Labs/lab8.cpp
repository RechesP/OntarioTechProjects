#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>

using namespace std;

const int MEMORY_SIZE = 10;  // Size of the computer memory



/* 
Function to read value from memory
The user chooses a memory register index (0-9), and the program should print both
the address of that register as well as the value stored there.
Print a message if the register index is not valid.
*/
void readValue(string* memory) {
    //TODO: Write this function!
    int input;
    cout << "Enter the index of the register to read (0-9): \n";
    cin >> input;
    if (input < 0 && input > 9){
        cout << "warning invaled value \n";
        
    }else{ 
        string *ptr;
        ptr = &memory[input];
        cout << "Value at register " << input << " (" << ptr << ") is: " << endl;
        cout << *ptr << endl;
    }
}

/*
Function to write value to memory
The user chooses a memory register (0-9) and enters any amount of text to be stored in that register.
The user indicates when to stop using a blank line of text.
*/
void writeValue(string* memory) {
    int writeAddress;
    cout << "Enter the memory register to write (0-9): ";
    cin >> writeAddress;
    cin.ignore();  // Ignore the newline character from previous input to avoid errors with getline

    //TODO: Read in any number of lines of text from the user and store them in a string
    //Do this until the user hits enter on a empty new line
    //Hint: inputLine.empty() can be used to see if the user entered a blank line
    string text;
    string input;
    while(true){
        getline(cin, text);
        if (text.empty()){
             break;
        }
        input += text + " ";
    }
    //TODO: Write the string into the correct memory register, using a string pointer
    
    string* ptr = &memory[writeAddress];
    
    //Print a message if the string was correctly entered,
    //and print a different message to report if the memory register is invalid
    if (writeAddress < 0 && writeAddress > 9){
        cout << "warning invaled value \n";
    }else{ 
        *ptr = input;
        cout << "String added correctly" << endl;
    }
}

/*
Function to display the memory contents
Print the address of each memory register as well as the data stored there.
There will be MEMORY_SIZE registers in total.
*/
void displayMemory(string* memory) {
    //TODO: Write this function!
    for (int i = 0; i < MEMORY_SIZE; i++){
        string *ptr = &memory[i];
        cout << "Register " << i << " (" << ptr << ") is: \n" << *ptr << endl;
    }
}

/*
Function to search and print memory values containing the entered string.
The user enters a string to search for, and the program should print all
memory registers (with address) that contain the search string.

If the string is not found in memory, print:
"No memory values contain the entered string."
*/
void SearchMemory(string* memory) {
    //TODO: write this function!
    string search;
    cout << "What are you looking for?" << endl;
    cin >> search;
    bool found = false;
    for (int i = 0; i < MEMORY_SIZE; i++){
        string *ptr = &memory[i];
        string str = *ptr;
        if (str.find(search) != string::npos){
            cout << "Register " << i << " (" << ptr << ") is: \n" << *ptr << endl;
            found = true;
        }
    }
    if (found = false){
        cout << "No memory values contain the entered string." << endl;
    }
}

/*
Given two string pointers, swap the values they point to.

This is not a call by reference function, which means that you need
to modify the values in memory, and you cannot change where the pointers
are pointing.
*/
void swapValues(string* str1, string* str2) {
    //TODO: write this function!
    string temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

/*
This function asks the user for 2 memory registers, and swaps the values there. 
It should use the swapValues function to swap the values.
The only parameter is the computer memory.
If the users wants to swap multiple times, allow them to do so until they indicate
they do not want to.
*/
void rearrangeValues(string* memory){
    //TODO: write this function!
    string cont;
    do{
        int index1;
        int index2;
        cout << "What is the first index \n";
        cin >> index1;
        cout << "What is the second index \n";
        cin >> index2;
        string *ptr1 = &memory[index1];
        string *ptr2 = &memory[index2];
        swapValues(ptr1, ptr2);
        displayMemory(memory);
        cout << "do you wish to continue swapping values y/n? \n";
        cin >> cont;
    }while(cont != "n");
    
}

int main() {
    string memory[MEMORY_SIZE];  // Computer memory
    cout << *memory << endl;
    cout << &memory[1] << endl;
    

    int choice;
    do {
        cout << "Memory Visualization Program" << endl;
        cout << "1. Read value from memory" << endl;
        cout << "2. Write value to memory" << endl;
        cout << "3. Display memory contents" << endl;
        cout << "4. Search values in memory" << endl;
        cout << "5. Rearrange values in memory" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                readValue(memory);
                break;
            case 2:
                writeValue(memory);
                break;
            case 3:
                displayMemory(memory);
                break;
            case 4:
                SearchMemory(memory);
                break;
            case 5:
                rearrangeValues(memory);
                break;
            case 6:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }

        cout << endl;
    } while (choice != 6);

    return 0;
}