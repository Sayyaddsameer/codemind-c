#include<stdio.h>
int main()
{
    float a,d=0,n,i;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        d=d+(1/i);
    }
    printf("%.2f",d);
}