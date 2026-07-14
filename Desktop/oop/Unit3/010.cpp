#include<iostream>
using namespace std;

class Aayu{
    private :
    int age;
    public:
    void display();
};

void Aayu::display(){
    cout<<"Age is "<< "19"<<endl;
}

int main(){
    Aayu a;
    a.display();
    return 0;
}