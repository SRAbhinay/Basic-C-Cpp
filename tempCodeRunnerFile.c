#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter N: ");
    scanf("%d", &n);
    for(i=n; i>=1; i--)
    {
        for(j=n; j>i; j--)
        {
            printf("%d", j);
        }
        for(j=1; j<=(i*2-1); j++)
        {
            printf("%d", i);
        }
        for(j=i+1; j<=n; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for(i=1; ii; j--)
        {
            printf("%d", j);
        }
        for(j=1; j<=(i*2-1); j++)
        {
            printf("%d", i+1);
        }
        for(j=i+1; j<=N; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}