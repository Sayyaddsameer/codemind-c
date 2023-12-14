#include<stdio.h>
int cost(int n,int m, int x)
{
    int c=2*(n+m)*x;
    return c;
}
int main()
{
    int n,m,x;
    scanf("%d%d%d",&n,&m,&x);
    int res =cost(n,m,x);
    printf("%d",res);
}