#include "file.h"
using namespace std;

int main(int argc, char *argv[]){
    // Fill in missing line of code by getting the second command line argument as file_name
    
    // Fill in missing line of code by getting the third command line argument as mode to open file
    
    // Check for mode to be -r for read and -w for write and call appriopriate method from the file class
         
        // For read just call readDataFromFile method with the file name
        // For write, take a fruit name from the user and pass it to the writeDataToFile function along with the file name
    
    File file;
    
    // Fill in missing lines of code
    
    string file_name = string(argv[1]);
    
    string mode = string(argv[2]);
    
    if (mode == "-r") file.readDataFromFile(file_name);
    
    else if (mode == "-w"){
        cout << "Enter a fruit you want to append to the end of file: ";
        string fruit;
        cin >> fruit;
        file.writeDataToFile(file_name, fruit);
    }
    
    return 0;
}