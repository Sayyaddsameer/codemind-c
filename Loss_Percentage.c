#include<stdio.h>
int main() 
{
    int x,y;
    scanf("%d%d",&x,&y);
    int l=x-y;
    float lp =(l*100.0)/x;
    printf("%.2f",lp);
}