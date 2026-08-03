#include <iostream>
using namespace std;

class Book {
private:
    string title,author;
    float price;

public:
    void inputData() {
        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        cout << "Enter Price: ";
        cin >> price;
    }

  
    void displayData();
};

void Book::displayData() {
    cout << "Book Details" << endl;
    cout << "Title : " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Price : Rs. " << price << endl;
}

int main() {
    Book b;

    b.inputData();      
    b.displayData();    

    return 0;
}