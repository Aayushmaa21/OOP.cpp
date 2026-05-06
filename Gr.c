#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter value of a");
    scanf("%d", &a);
    printf("Enter value of b");
    scanf("%d", &b);
    printf("Enter value of c");
    scanf("%d", &c);

    if(a > b && a > c){
        printf("a is greatest among all");
    }
    else if (b>a && b >c){
          printf("b is greatest among all");
    }
    else{
          printf("c is greatest among all");
    }



    return 0;
}