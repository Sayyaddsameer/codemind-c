#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,n;
    scanf("%d",&n);
    printf("0 1 ");
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
}