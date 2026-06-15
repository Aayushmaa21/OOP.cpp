#include <stdio.h>

int main() {
    int a[4][4], i, j, sum;

    // Input matrix
    printf("Enter elements of 4x4 matrix:\n");

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of each row
    for(i = 0; i < 4; i++) {
        sum = 0;

        for(j = 0; j < 4; j++) {
            sum = sum + a[i][j];
        }

        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}