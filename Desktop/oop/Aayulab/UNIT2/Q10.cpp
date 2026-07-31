#include<iostream>
using namespace std;

int sum(int n){
    int arr[n];
    int *ptr = arr;
    int sum = 0;
    cout<<"Enter your intput: ";
    for(int i = 0; i <n;i++){
        cin >> *(ptr+i);
        sum = sum + *(ptr+i);
     
    }
    return sum;
}

int main(){
    cout << "Sum is: "<<sum(5);
    return 0;
}