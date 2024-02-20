#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a,b;
    scanf("%d%d",&a,&b);
    int max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i]&&arr[i]>b)
        {
            max=arr[i];
        }
    }
    if(max>arr[0])
    {
    printf("%d",max);
    }
    else{
        printf("-1");
    }
}