#include<iostream>
using namespace std;

namespace MyNamespace{
    void display (){
        cout << "Inside MyNamespace" << endl << "MyNamespace"<<endl;
    }
}

namespace Math{
    int display ( int a , int b){
        return a + b;
    }
}
using namespace Math;
int main(){
    MyNamespace::display();
    cout << "Sum: " <<display(10,5) << endl; //Using add didectly w/o doing Math ::display
    return 0;
}
