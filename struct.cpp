#include <iostream>
#include <cstring>

using namespace std;

struct Book {
    int id;
    char title[32];
};

void printBook(Book book);

int main () {

    Book book1;
    Book book2;

    book1.id = 100;
    strcpy(book1.title, "Linux C Programe !");

    book2.id = 101;
    strcpy(book2.title, "Head First PHP");

    printBook(book1);
    printBook(book2);

    return 0;
}

void printBook (Book book) {
    cout << book.id << ": " << book.title << endl;
}