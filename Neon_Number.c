#include<stdio.h>
int main()
{
    int n,s,i,r=0;
    scanf("%d",&n);
    s=n*n;
    while(s!=0)
    {
        r+=s%10;
        s/=10;
        i++;
    }
    if(n==r)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}