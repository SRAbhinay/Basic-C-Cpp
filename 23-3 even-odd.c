#include<stdio.h>
#include<stdlib.h>
 
void nature(int n);        
 
int main()
{      int n;
      scanf("%d", &n);
      nature(n);
      return 0; }
 
void nature(int n)   
{     if(n%2==0)
        printf("even number");
    else
        printf("odd number"); }
