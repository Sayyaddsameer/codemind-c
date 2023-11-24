#include<stdio.h>
int main()
{
    int n,i,r=0,m=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r+=n%10;
        m*=n%10;
        n/=10;
        i++;
        
    }
    if(r==m)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}