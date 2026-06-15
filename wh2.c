#include<stdio.h>
int main(){
    int n,sum=0, rem;
    printf("Enter digit n\n");
    scanf("%d",&n);
    while(n>0){
        rem = n%10;
        sum+=rem;
        n/=10;
    }

    printf("Sum of digit is %d",sum);
    return 0;
}