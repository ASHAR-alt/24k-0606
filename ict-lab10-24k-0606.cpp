#include <iostream>
#include <string>
using namespace std;

class LibraryBook {
private:
    int availableCopies;

public:
    string title;
    string author;
    long ISBN;

    void setCopies(int copies) {
        if (copies >= 0) {
            availableCopies = copies;
        } else {
            cout << "Invalid number of copies. Setting to 0." << endl;
            availableCopies = 0;
        }
    }

    int getCopies() {
        return availableCopies;
    }

    void displayDetails() {
        cout << "\nBook Details:\n";
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Available Copies: " << availableCopies << endl;
    }
};

int main() {
    LibraryBook book;

    cout << "Enter the book's title: ";
    getline(cin, book.title);
    cout << "Enter the book's author: ";
    getline(cin, book.author);
    cout << "Enter the book's ISBN: ";
    cin >> book.ISBN;
    cout << "Enter the number of available copies: ";
    int copies;
    cin >> copies;

    book.setCopies(copies);
    book.displayDetails();

    return 0;
}

