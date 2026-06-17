//Two namesapce containing same functions
#include<iostream>
using namespace std;
namespace Math1{
    int display(int a ,int b){
        return a+b;
    }
}
namespace Math2{
    int display(int a ,int b){
      return  a*b;
    }
}
int main(){
    
    cout <<"Sum is:" << Math1 :: display(4,5)<<endl;
    cout <<"Product is:" << Math2 :: display(4,5);



    return 0;
}