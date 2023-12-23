#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	scanf("%[^
]s",s);
	int i=0,j=strlen(s)-1,t;
	while(i<=j)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
		i++;
		j--;
	}
	printf("%s",s);
}