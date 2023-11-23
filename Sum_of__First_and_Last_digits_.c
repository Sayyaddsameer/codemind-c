#include<stdio.h>
int main()
{
    int n,r=0,a,re;
    scanf("%d",&n);
    r=n%10;
    while(n!=0)
    {
        n/=10;
        if(n<10)        
        break;
    }
    printf("%d",n+r);
}