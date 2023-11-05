#include<stdio.h>
int main()
{
    int n,m,x;
    scanf("%d%d%d",&m,&n,&x);
    int cost=2*(n+m)*x;
    printf("%d",cost);
}