#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int p = y-x;
    float per = (p*100.0)/x;
    printf("%.2f",per);
}