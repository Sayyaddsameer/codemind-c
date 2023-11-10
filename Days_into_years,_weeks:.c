#include<stdio.h>
int main()
{
    int d;
    scanf("%d",&d);
    int y=d/356;
    int w=(d-(365*y))/7;
    printf("%d
%d",y,w);
}    