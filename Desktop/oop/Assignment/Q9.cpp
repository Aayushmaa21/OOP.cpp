#include <iostream>
#include <string>
using namespace std;

class Books
{
    string author, title, publisher;
    float price;
    int stock;

public:
    // Constructor
    Books(string a, string t, float p, string pub, int s)
    {
        author = a;
        title = t;
        price = p;
        publisher = pub;

        stock = *new int(s);   // allocate memory using new
    }

    // Function to search book
    bool search(string t, string a)
    {
        return title == t && author == a;
    }

    // Function to display book details
    void display()
    {
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author;
        cout << "\nPublisher: " << publisher;
        cout << "\nPrice: " << price;
        cout << "\nStock: " << stock << endl;
    }

    // Function to sell books
    void sell(int copies)
    {
        if (copies <= stock)
        {
            cout << "Total Cost: " << price * copies << endl;
            stock -= copies;
        }
        else
        {
            cout << "Required copies not in stock." << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter number of books: ";
    cin >> n;

    Books **b = new Books*[n];

    // Input book details
    for (int i = 0; i < n; i++)
    {
        string author, title, publisher;
        float price;
        int stock;

        cout << "\nEnter details of book " << i + 1 << ":\n";

        cout << "Author: ";
        cin >> author;

        cout << "Title: ";
        cin >> title;

        cout << "Price: ";
        cin >> price;

        cout << "Publisher: ";
        cin >> publisher;

        cout << "Stock: ";
        cin >> stock;

        b[i] = new Books(author, title, price, publisher, stock);
    }

    // Search
    string searchTitle, searchAuthor;

    cout << "\nEnter title to search: ";
    cin >> searchTitle;

    cout << "Enter author: ";
    cin >> searchAuthor;

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (b[i]->search(searchTitle, searchAuthor))
        {
            found = true;
            b[i]->display();

            int copies;
            cout << "Enter number of copies required: ";
            cin >> copies;

            b[i]->sell(copies);
            break;
        }
    }

    if (!found)
        cout << "Not found." << endl;

    return 0;
}