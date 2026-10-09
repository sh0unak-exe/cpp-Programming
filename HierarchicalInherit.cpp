#include <iostream>
using namespace std;

class LibraryItem {
protected:
    string itemID;
    string title;

    void getItem() {
        cout << "Enter Item ID: ";
        getline(cin, itemID);

        cout << "Enter Title: ";
        getline(cin, title);
    }
};

class Book : protected LibraryItem {
protected:
    string author;

    void getBook() {
        cout << "Enter Author Name: ";
        getline(cin, author);
    }

public:
    void displayBook() {
        getItem();
        getBook();

        cout << "\n----- Book Details -----" << endl;
        cout << "Item ID: " << itemID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

class Magazine : protected LibraryItem {
protected:
    int issueNo;

    void getMagazine() {
        cout << "Enter Issue Number: ";
        cin >> issueNo;
        cin.ignore();
    }

public:
    void displayMagazine() {
        getItem();
        getMagazine();

        cout << "\n----- Magazine Details -----" << endl;
        cout << "Item ID: " << itemID << endl;
        cout << "Title: " << title << endl;
        cout << "Issue Number: " << issueNo << endl;
    }
};

int main() {
    Book b;
    Magazine m;

    cout << "===== Enter Book Details =====" << endl;
    b.displayBook();

    cout << "\n===== Enter Magazine Details =====" << endl;
    m.displayMagazine();

    return 0;
}

