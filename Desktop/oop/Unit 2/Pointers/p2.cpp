//Traverse using pointers
#include<iostream>
using namespace std;

int main(){
    int arr[]={34,56,76};
    int *p = arr;
    for(int i = 0;i<3;i++){
        cout<<"Value inside array are "<<*(p+i)<<endl;
    }

    return 0;
}