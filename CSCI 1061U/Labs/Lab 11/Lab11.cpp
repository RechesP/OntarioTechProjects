#include <iostream>
#include <cstring>
using namespace std;

class LibraryItem
{
    private:
    char * title;
    int year;
    
    public:
    LibraryItem()
    {
        this->title = nullptr;
        this->year = 0;
    }
    LibraryItem(const char* title, int year)
    {
        this->title = new char[strlen(title) + 1];
        strcpy(this->title, title);
        this->year = year;
    }
    LibraryItem(const LibraryItem& other)
    {
        // Fill in this function
        this->title = new char(*other.title);
        strcpy(this->title, other.title);
        this->year = other.year;
    }
    LibraryItem& operator=(const LibraryItem& other)
    {
        // Fill in this function
        if (&other != this){
            delete[] this->title;
            this->year = other.year;
            this->title = new char[strlen(other.title) + 1];
            strcpy(this->title, other.title);
        }
        return *this;
    }
    ~LibraryItem()
    {
        delete[] this->title;
    }
    void display()
    {
        cout << "Title: " << this->title << " (" << this->year << ")"<<endl;
    }
};

class Book : public LibraryItem
{
    private:
    char* author;
    
    public:
    //Book’s parameterized constructor //Fill in the signature for Book's parameterized Constructor
    Book(const char* title, int year, const char* author) : LibraryItem(title, year)
    {
        // Fill in this function
        this->author = new char[strlen(author) + 1];
        strcpy(this->author, author);
    }
    //Books's Copy Constructor // Fill in the signature for Book's Copy Constructor
    Book(const Book& other) : LibraryItem(other)
    {
        // Fill in this function
        this->author = new char[strlen(other.author) +1];
        strcpy(this->author, other.author);
    }
    //Books's Custom Assignment Operator //Fill in the signature for Books's Custom Assignment Operator
    Book& operator=(const Book& other)
    {
        // Fill in this function
        if (&other != this){
            LibraryItem::operator=(other);
            delete[] this->author;
            this->author = new char[strlen(other.author) + 1];
            strcpy(this->author, other.author);
        }
        return *this;
    }
    void display()
    {
        LibraryItem::display();
        cout << "Author: " << this->author<<endl<<endl;
    }
    ~Book()
    {
        delete[] this->author;
    }
};

void display(Book * items[], int size)
{
    // Fill in this function
    for (int i = 0; i < size; i++){
        items[i]->display();
    }
}

int main()
{
    const int SIZE = 5;
    
    Book* books[SIZE] = {
        new Book("The Catcher in the Rye", 1951, "J.D. Salinger"),
        new Book("The Hobbit", 1937, "J.R.R. Tolkien"),
        new Book("Pride and Prejudice", 1813, "Jane Austen"),
        new Book("1984", 1949, "George Orwell"),
        new Book("The Great Gatsby", 1925, "F. Scott Fitzgerald")
    };
    
    display(books, SIZE);
    
    // Test the copy constructor
    Book* copiedBook = new Book(*books[0]);
    
    cout << "\nCopied Book:\n";
    copiedBook->display();
    
    delete copiedBook;
    
    return 0;
}