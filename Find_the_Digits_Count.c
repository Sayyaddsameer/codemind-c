#include<stdio.h>
int main()
{
    int n,i,r,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=n%10;
        s=i+1;
        n=n/10;
    }
    printf("%d",s);
    
}