#include <string>
#include <iostream>
#include <fstream>
#include "book.h"
using namespace std;

int main(){
    ifstream input;
    string bookDeets;
    int size = 1;
    Book *arr = new Book[size];
    input.open("books.txt");
    while(getline(input,bookDeets)){
        string book[3];
        for (int i = 0; i < 3; i++){
            if (bookDeets.find(",") != string::npos){ 
                book[i] = bookDeets.substr(0,bookDeets.find(","));
                bookDeets = bookDeets.substr(bookDeets.find(",")+1);
            }
            else{
                book[i] = bookDeets;
            }
        }
        Book newBook = Book(book[0],book[1],book[2]);
        arr = resize(arr, &size);
        arr[size-1] = newBook;
        size++;
    }
    cout << "All data read from file to heap..." << endl;
    for(int i = 0; i < size-1; i++){
        cout << "Book: " << arr[i].name << endl;
        cout << "Year: " << arr[i].year << endl;
        cout << "Publisher: " << arr[i].publisher << endl;
        cout << endl;
    }
    return 0;
}