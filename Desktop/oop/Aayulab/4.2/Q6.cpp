#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char str[100];

public:
    // Constructor
    MyString(const char s[]) {
        strcpy(str, s);
    }

    // Overloading + operator
    MyString operator+(MyString m) {
        MyString temp(str);

        strcat(temp.str, m.str);

        return temp;
    }

    // Display string
    void display() {
        cout << str << endl;
    }
};

int main() {
    MyString s1("Hello ");
    MyString s2("World");

    MyString s3 = s1 + s2;

    cout << "Concatenated string: ";
    s3.display();

    return 0;
}