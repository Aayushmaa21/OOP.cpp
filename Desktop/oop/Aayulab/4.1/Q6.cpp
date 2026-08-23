#include<iostream>
using namespace std;

class Counter{
    private:
    int count;
    public:
    Counter(int c = 0){
        count = c;

    }

    void operator++(){
        ++count;
    }
    void display(){
        cout<<"Count = "<<count<<endl;
    }
};

int main(){
    Counter c(5);
     cout << "Before increment: ";
    c.display();

    ++c;   // Calls operator++()

    cout << "After increment: ";
    c.display();


    return 0;
}