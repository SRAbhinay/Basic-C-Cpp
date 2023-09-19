#include <stdio.h>
int main()
{
    int arr1[10], n,ctr=0;
    int i, j, k;
       scanf("%d",&n);
       for(i=0;i<n;i++)
            {
	      scanf("%d",&arr1[i]);
	    }
    for(i=0; i<n; i++)
    {
        ctr=0;
        for(j=0,k=n; j<k+1; j++)
        {
            if (i!=j)
            {
		       if(arr1[i]==arr1[j])
              {
                 ctr++;
               }
             }
        }
       if(ctr==0)
        {
          printf("%d ",arr1[i]);
        }
    }
       printf("\n\n");
}