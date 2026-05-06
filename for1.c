#include<stdio.h>
int main(){
    int n,i=1;
    long fact=1;
    printf("Enter value of n\n");
    scanf("%d",&n);

    for(i=1; i <=n;i++){
        fact = fact*i;
    }
     printf("The factorail is %d",fact);  


    return 0;
}