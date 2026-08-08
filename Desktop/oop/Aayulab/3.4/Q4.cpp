#include <iostream>
using namespace std;

class Product {
private:
    int productID;
    float price;

public:
    void setData(int productID, float price) {
        this->productID = productID; //Points to object
        this->price = price;
    }

    void display() {
        cout << "Product ID: " << productID << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Product p;

    p.setData(101, 2500.50);
    p.display();

    return 0;
}