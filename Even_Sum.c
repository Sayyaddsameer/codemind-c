#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int i,s=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	    if(arr[i]%2==0)
	    {
		s=s+arr[i];
	    }
	}
	printf("%d",s);
}