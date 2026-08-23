#include <iostream>
using namespace std;

class Address {
public:
    string street;
    string city;
    int zip;

    Address(string s, string c, int z) {
        street = s;
        city = c;
        zip = z;
    }
};

class Student {
public:
    string name;
    Address a;   // Student HAS-A Address

    Student(string n, Address add) : name(n), a(add) {
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Street: " << a.street << endl;
        cout << "City: " << a.city << endl;
        cout << "ZIP Code: " << a.zip << endl;
    }
};

int main() {
    Address adr("Main Street", "Kathmandu", 44600);

    Student s("Aayushma", adr);

    s.display();

    return 0;
}