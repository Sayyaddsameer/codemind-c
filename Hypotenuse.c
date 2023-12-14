#include<stdio.h>
#include<math.h>
float hyp(float a,float b)
{
   float c=sqrt(pow(a,2)+pow(b,2));
   return c;
}
 int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    float res=hyp(a,b);
    printf("%.2f",res);
}
