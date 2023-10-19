#include <stdio.h>

int main() {
    int N, i, j, k;
    printf("Enter N: ");
    scanf("%d", &N);
if (N<=9){
    for (i = 1; i <= N; i++) {
        for (j = i; j < N; j++) {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("%d", i);
        }
        printf("\n");
    }

    for (i = N - 1; i >= 1; i--) {
        for (j = N; j > i; j--) {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("%d", i);
        }
        printf("\n");
    }}else if(N>9){
        printf("Cant print a proper diamond with N greater than 9. Kindly Change the Value of N");
    }

    return 0;
}
