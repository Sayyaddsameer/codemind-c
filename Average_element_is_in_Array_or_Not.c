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
		s=s+arr[i];
	}
	int avg=s/n;
	for(i=0;i<n;i++)
	{
	if(avg==arr[i])
	{
	    printf("True");
	    break;
	}
	}
	if(avg!=arr[i])
	{
	    printf("False");
	}
}