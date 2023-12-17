#include<stdio.h>
int main()
{
    int n,i,sq=0,s=0,sm;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sq=sq+(i*i);
        s=s+i;
    }
    printf("%d",(s*s)-sq);
}