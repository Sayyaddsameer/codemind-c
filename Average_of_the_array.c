#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    float avg=s/(n*1.0);
    printf("%.2f",avg);
}