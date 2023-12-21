#include<stdio.h>
int main()
{
	int r,c,i,j;
	scanf("%d%d",&r,&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
	    }
	}
	int n,m;
	scanf("%d%d",&n,&m);
	int ar[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		scanf("%d",&ar[i][j]);
	    }
	}
	if(r==n&&c==m)
	{
		for(i=0;i<r;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%d ",a[i][j]+ar[i][j]);
			}
			printf("
");
		}
	}
	else
	{
		printf("addition is not possible");
	}
}