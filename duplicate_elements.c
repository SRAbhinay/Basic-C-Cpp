#include <stdio.h>
int main()
{
    int arr1[10], n;
    int i, j, k;
       scanf("%d",&n);
       for(i=0;i<n;i++)
            {
	      scanf("%d",&arr1[i]);
	    }
    for(i=0; i<n; i++)
    {
        for(j=0,k=n; j<k+1; j++)
        {
            if (i!=j)
            {
		       if(arr1[i]==arr1[j])
              {
                 printf("%d\n", arr1[i]);
               }
             }
        }
    }
}
