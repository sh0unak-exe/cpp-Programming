#include <iostream>
#include <string>
using namespace std;

class LibraryBook {
private:
    int bookId;
    string bookName;
    bool issued;

public:
    LibraryBook(int id, string name) {
        bookId = id;
        bookName = name;
        issued = false;
    }

    void issueBook() {
        if (!issued) {
            issued = true;
            cout << "Book issued successfully." << endl;
        }
        else {
            cout << "Book is already issued." << endl;
        }
    }

    void returnBook() {
        if (issued) {
            issued = false;
            cout << "Book returned successfully." << endl;
        }
        else {
            cout << "Book was not issued." << endl;
        }
    }

    void display() {
        cout << "\n----- Book Details -----" << endl;
        cout << "Book ID : " << bookId << endl;
        cout << "Book Name : " << bookName << endl;

        if (issued)
            cout << "Status : Issued" << endl;
        else
            cout << "Status : Available" << endl;
    }
};

int main() {
    LibraryBook book(101, "C++ Programming");

    book.display();

    book.issueBook();
    book.display();

    book.returnBook();
    book.display();

    return 0;
}