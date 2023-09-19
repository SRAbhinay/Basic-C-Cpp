#include<stdio.h>
void mm(int a,int b,int c)
{
    if(a<b && a<c)
    {
        printf("%d\n",a);
    }
    if(b<a && b<c)
    {
        printf("%d\n",b);
    }
    if(c<b && c<a)
    {
        printf("%d\n",c);
    }
    
    if(a>b && a>c)
    {
        printf("%d\n",a);
    }
    if(b>a && b>c)
    {
        printf("%d\n",b);
    }
    if(c>b && c>a)
    {
        printf("%d\n",c);
    }
}
int main()
{
    int a,b,c;
    scanf("%d",&a);scanf("%d",&b);scanf("%d",&c);
    mm(a,b,c);
}