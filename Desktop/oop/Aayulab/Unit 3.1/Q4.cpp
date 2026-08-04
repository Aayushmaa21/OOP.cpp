#include <iostream>
using namespace std;

class Book {
private:
    string title;
    float price;

public:
    // Parameterized Constructor
    Book(string t, float p) {
        title = t;
        price = p;
    }

    // User-Defined Copy Constructor
    Book(Book &b) {
        title = b.title;
        price = b.price;
        cout << "Copy Constructor Called" << endl;
    }

    // Display Function
    void display() {
        cout << "Title : " << title << endl;
        cout << "Price : Rs. " << price << endl;
    }
};

int main() {
    // Create first object using parameterized constructor
    Book b1("C++ Programming", 950);

    // Create second object using copy constructor
    Book b2 = b1;

    cout << "\nBook 1 Details:" << endl;
    b1.display();

    cout << "\nBook 2 Details:" << endl;
    b2.display();

    return 0;
}