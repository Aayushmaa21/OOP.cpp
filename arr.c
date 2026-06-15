#include<stdio.h> 
int main(){ 
    int n; 
    printf("Enter value of n\n"); 
    scanf("%d",&n); 
 
    int a[n]; 
    printf("Enter elements\n"); 
    for(int i=0; i <n; i++){ 
        scanf("%d", &a[i]); 
    } 
    printf("Reversed array:\n"); 
    for(int i=n-1; i>=0; i--){ 
        printf("%d ",a[i]); 
    } 
    return 0; 
} 
 
