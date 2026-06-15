/*Write a program that accepts a character and displays:
ASCII value and Next character in the ASCII sequence*/
#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter a character: "<<endl;
    cin>>a;
    int b =static_cast<int>(a);

    cout << "ASCII value is "<<static_cast<int>(a)<<endl;
    cout << "Next character is "<<static_cast<char>(b+1)<<endl;





    return 0;
}