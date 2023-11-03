#include<stdio.h>
int main()
{
	int i,n,r,d=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		d=d+r;
		n=n/10;
	}
	printf("%d",d);
}