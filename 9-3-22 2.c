#include <stdio.h>    
int main()    
{      
    int l, n, p, i;
    printf("lenghth?\n");
    scanf("%d", &l);
    int arr1[l];
    printf("elements of 1\n");
    for (int i = 0; i < l; i++)
    {     
    scanf("%d", &arr1[i]);
    }
    int arr2[l+1];
    printf("digit\n");
    scanf("%d", &n);
    printf("position\n");
    scanf("%d", &p);
    for(i=0; i<p-1; i++)
    {
        arr2[i]=arr1[i];
    }
    arr2[p-1]=n;
    for(i=p; i<=l; i++) 
    {
        arr2[i]=arr1[i-1];
    }
    printf("elements of 2\n");
    for(i=0; i<=l; i++)
    {
    printf("%d\n", arr2[i]);
    }
    return 0;
}