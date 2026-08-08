#include <iostream>
using namespace std;

class Book {
private:
    string title;
    int price;

public:
    // Parameterized constructor
    Book(string t, int p) {
        title = t;
        price = p;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }

};

int main() {
    // Parameterized constructor
    Book b1("C++ Programming", 500);

    // Copy Initialization
    Book b2 = b1;

    cout << "Original Object:" << endl;
    b1.display();

    cout << "\nCopied Object:" << endl;
    b2.display();

    return 0;
}