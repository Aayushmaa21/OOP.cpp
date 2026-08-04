#include <iostream>
using namespace std;

class Car {
private:
    string company;
    float price;

public:
    Car(string c, float p) {
        company = c;
        price = p;
    }

    // Display Function
    void display() {
        cout << "Company : " << company << endl;
        cout << "Price: Rs. " << price << endl;
    }
};

int main() {
    Car c1("Toyota", 4500000);

    
    Car c2 = c1;

    cout << "Car 1 Details:" << endl;
    c1.display();

    cout << "Car 2 Details:" << endl;
    c2.display();

    return 0;
}