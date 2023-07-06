#include <iostream>
using namespace std;

class Book {
    public:
        string  title;
        string author;
        int pages;

        Book() {
            title = "no title";
            author = "no author";
            pages = 0;
        }

        Book(string aTitle, string aAuthor, int aPages) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main() {
    Book book1("Harry Potter", "JK Rowling", 500);

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl << endl;

    Book book2("Lord of the Rings", "Tolkein", 700);

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl << endl;


    Book book3;

    cout << book3.title << endl;
    cout << book3.author << endl;
    cout << book3.pages << endl;


    return 0;
}