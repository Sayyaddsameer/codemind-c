#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int i,l=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            l=l+1;
        }
    }
    printf("%d",l);
}