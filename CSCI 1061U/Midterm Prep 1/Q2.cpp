#include <iostream> 
#include <string>
using namespace std;

bool testPalindrome(string palindrome, int left) {
    if (palindrome.length() <= 1) {
        return true;
    }
    else if (palindrome[left] != palindrome[palindrome.length()-1]) {
        return false;
    }
    else
    {
        return testPalindrome(palindrome.substr(1,palindrome.length()-2),0);
    }
}

int main() {
    string input;

    cout << "Enter a sentence: ";
    cin >> input;

    if (testPalindrome(input, 0)) {
        cout << '\"' << input << "\" is a palindrome" << endl;
    }
    else {
        cout << '\"' << input << "\" is not a palindrome" << endl;
    }
}