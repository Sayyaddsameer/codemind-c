#include<stdio.h>
int time(int,int);
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int res=time(x,y);
    printf("%d",res);
}
int time(int x,int y)
{
    int t=(x*y)/(x+y);
    return t;
}