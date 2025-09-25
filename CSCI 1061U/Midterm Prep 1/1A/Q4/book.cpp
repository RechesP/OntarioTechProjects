#include <string>
#include "book.h"
using namespace std;

Book::Book(){}
Book::Book(string name, string year, string publisher){
    this->name = name;
    this->year = year;
    this->publisher = publisher;
}

//arr is an array of size-1 Books
Book* resize(Book* arr, int* size){
    Book *nArr = new Book[*size+1];
    for (int i = 0; i < *size-1; i++){
        nArr[i] = arr[i];
    }
    delete[] arr;
    arr = nArr;
    return arr;
}