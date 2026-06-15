#include<stdio.h>
int fact(int);
int fact(int a){
    if(a == 0 || a == 1)
    return 1;
    else
    return a* fact(a-1);
}
int main(){
    int x=5;
    int b = fact(x);
      printf("%d",b);


    return 0;
}