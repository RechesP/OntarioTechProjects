#include <iostream>
#include <cstring>
using namespace std;

class Book{
private:
    // price of double data type
    // genre of char data type
    // a char pointer title
    double price;
    char genre;
    char* title;
public:
    Book(){
        // set price to 0
        // set genre to ‘U’ (Unknown)
        // set title pointer to ‘nullptr’
        price = 0;
        genre = 'U';
        title = nullptr;
    }

    Book(double p, const char* t, char g){
        // Check if p is greater than 0 and (g is ‘F’ (Fiction) or g is ‘N’ (Non-Fiction) or g is ‘S’ Science) then
        // map these parameters to their corresponding data members
        // Be careful mapping title which should point to memory space in heap based on the length of parameter ‘t’
        // If above check is not true then
        // price should be 0
        // genre should be ‘U’
        // title should be nullptr
        if (p > 0 && (g == 'F' || g == 'N' || g == 'S')){
            price = p;
            genre = g;
            title = new char[strlen(t) + 1];
            strcpy(title, t);
        }
        else{
            price = 0;
            genre = 'U';
            title = nullptr;
        }
    }
    
    char* getTitle(){
        // return whatever is stored in title;
        return title;
    }

    operator bool() /*operator overloading for bool*/{
        // return true if price is greater than 0 else false
        return price > 0;
    }
    
    void display() // No need to change this method, just analyze
    {
        cout << "Book | ";
        if (bool(*this)){ // checks the current object's price
            //for > 0
            cout << "Available | ";
            cout << "Price: $" << price << " | Genre: " << genre << " | Title: " << title;
        }
        else{
            cout << "Unknown";
        }
        cout << endl;
    }

    ~Book(){
        // delete heap memory allocated for title
        delete[] title;
    }
    
    Book& operator+=(double p){
        // Check if price is greater than 0 then add p to price. Return the current object (*this)
        if (bool(*this)) price += p;
        return *this;
    }
    
    bool operator==(Book &book){
        // return true if book object is equal to current object else return false (you might want to check each data member forequality)
        if (book.price == price && book.genre == genre && book.title == title){
            return true;
        }
        return false;
    }
};

ostream& operator<<(ostream& out, Book &book){
    // call book’s display method and return appropriate ostream object
    book.display();
    return out;
}

int main() {
    Book libraryBooks[] = {
        {25.0, "To Kill a Mockingbird", 'F'},
        {20.0, "Sapiens", 'N'},
        {15.0, "The Martian", 'S'},
        {-10.0, "1984", 'F'}, // invalid
        {30.0, "The Catcher in the Rye", 'F'},
        {-20, "Cosmos", 'S'}, // invalid
    };
    int size = sizeof(libraryBooks)/sizeof(libraryBooks[0]);
    cout << "\nDisplaying Books..." << endl;
    
    for (int i=0; i<size; i++){
        cout <<libraryBooks[i];
    }
    
    libraryBooks[1] += 5.0;
    cout << "\nDisplaying Books after incrementing price of Book 2..." << endl;
    
    for (int i=0; i<size; i++){
        cout <<libraryBooks[i];
    }
    
    cout <<"\nComparing Book 1 and Book 2..."<<endl;
    
    if (libraryBooks[0] == libraryBooks[1]){
        cout <<"Book[0] and Book[1] are similar"<<endl;
    }
    else{
        cout <<"Book[0] and Book[1] are not similar" <<endl;
    }

    return 0;
}