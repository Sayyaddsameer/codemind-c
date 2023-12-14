#include<stdio.h>
float lp(float x, float y)
{
    float l=x-y;
    float p=(l/x)*100.0;
    return p;
}
int main()
{
    float x,y;
    scanf("%f%f",&x,&y);
    float res=lp(x,y);
    printf("%.2f",res);
}