#include<stdio.h>
int main()
{
	int n,m,f,r,a,i;
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++)
	{
		f=0;
		a=i;
		while(a!=0)
		{
		r=a%10;
		if(r==0||i%r!=0)
		{
			f=1;
		}
		a/=10;
		
	   }
	if(f==0)
	{
		printf("%d ",i);
	}
	
}
}