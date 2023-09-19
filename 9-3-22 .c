#include <stdio.h>    
int main()    
{      
    int l;
    scanf("%d", &l);
    int arr1[l];
        for (int i = 0; i <= l; i++) {     
        scanf("%d", &arr1[i]);
    }
    int length = sizeof(arr1)/sizeof(arr1[0]);    
    int arr2[length];      
    for (int i = 0; i < length; i++) {     
        arr2[i] = arr1[i];     
    }  
    printf("\n");
    for (int i = 0; i < length; i++) {     
        printf("%d\n", arr2[i]);    
    }    
    return 0;    
}    
