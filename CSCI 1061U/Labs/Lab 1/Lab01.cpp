// 18/01/2024 
// Reches P.
// Lab01.cpp.1.0

#include <iostream>
using namespace std;

string genPass(int length){
    string pass;
    if (length == 12){
       pass = "000000000000"; 
    }
    else if (length == 13){
       pass = "0000000000000"; 
    }
    else if (length == 14){
       pass = "00000000000000"; 
    }
    else if (length == 15){
       pass = "000000000000000"; 
    }
    else if (length == 16){
       pass = "0000000000000000"; 
    }
    for (int i = 0; i < length; i++){    
        int ascii_num =  rand() % 93 + 33;
        char character = ascii_num;
        pass[i] = character;
    }
    return pass;
}

bool isSecurePassword(const string& password){
    bool capL = false;
    bool lowL = false;
    bool dig = false;
    bool specC = false;
    bool phrase = true;
    
    string upperPass = password;
    for(int i = 0; i < password.length() -1; i++){
        upperPass[i] = toupper(password[i]);
    }
    // std::cout << upperPass << std::endl;
    
    //check for at least one Capital Letter, one Lowercase Letter, one digit, one Special Character
    for (int i = 0; i < password.length() -1; i++){
        if ((password[i] > 32 && password[i] < 48) || (password[i] > 57 && password[i] < 65) || (password[i] > 90 && password[i] < 97) || (password[i] > 122 && password[i] < 127)){
            specC = true;
        }
        if (password[i] > 64 && password[i] < 91){
            capL = true;
        }
        if (password[i] > 96 && password[i] < 123){
            lowL = true;
        }
        if (password[i] > 47 && password[i] < 58){
            dig = true;
            if (password[i] == password[i+1] - 1 && password[i] == password[i+2] - 2){
                return false;
            }
        }
    }
    
    //check for sequences, patterns, common words, and coder fisrtname
    for (int i = 0; i < password.length()-1; i++){
        if (password[i] == password[i+1] && password[i] == password[i+2]){
            return false;
        }
        if (upperPass.find("PASSWORD") == std::string::npos || upperPass.find("RECHES") == std::string::npos){
            phrase = false;
        }
    }
    // std::cout << phrase << std::endl;
    if (capL == true && lowL == true && dig == true && specC == true && phrase == false){
        return true;
    }
    return false;
}

int main()
{
    // std::cout << isSecurePassword("0er@j0Z[N:pw") << std::endl;
    // std::cout << isSecurePassword("Reches") << std::endl;
    // std::cout << isSecurePassword("123456789012") << std::endl;
    // std::cout << isSecurePassword(")))))") << std::endl;
    
    srand(time(NULL));
    string pass_length;
    std::cout << "Enter the desiered length of password (between 12 and 16 characters): " ;
    std::cin >> pass_length;
    int passLength = std::stoi(pass_length);
    while(!(passLength >= 12 && passLength <= 16)){
        std::cout << "Invalid password length. Please enter a length between 12 and 16 characters." << std::endl;
        std::cout << std::endl;
        std::cout << "Enter the desiered length of password (between 12 and 16 characters): " ;
        std::cin >> pass_length;
        passLength = std::stoi(pass_length);
    }
    if (passLength >= 12 && passLength <= 16){
        string pass;
        do{
            pass = genPass(passLength);
            // std::cout << "pass failed" << std::endl;
        }while(isSecurePassword(pass) == false);
        std::cout << "Generated Password: " << pass << std::endl;
    }
}