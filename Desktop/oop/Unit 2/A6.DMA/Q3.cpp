//program that dynamically allocates memory for two numbers and displays their sum.

#include<iostream>
using namespace std;

int main(){
int *a = new int;
int *b = new int;
int sum ;

cout << "Enter value of a and b"<<endl;
cin >> *a >> *b;

sum = *a +*b;

cout <<"Sum is "<<sum<<endl;

delete a;
delete b;





    return 0;
}
