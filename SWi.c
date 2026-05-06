#include<stdio.h>
int main(){
    int a,b;
    char z;
    printf("Enter value of a and b\n");
    scanf("%d %d",&a,&b);
    printf("Enter operators of z\n");
    scanf(" %c",&z);

    switch(z){
        case '+':
        printf("The sum is %d",a+b);
        break;
        case '-':
        printf("The difference is %d",a-b);
        break;
        printf("Invalid choice");
    }





    return 0;
}