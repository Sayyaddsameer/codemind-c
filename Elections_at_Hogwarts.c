#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x>50&&x+y+z==101&&0<=x<=101&&0<=y<=101&&0<=z<=101)
    {
        printf("Gryffindor");
    }
    else if(y>50&&x+y+z==101&&0<=x<=101&&0<=y<=101&&0<=z<=101)
    {
        printf("Slytherin");
    }
    else if(z>50&&x+y+z==101&&0<=x<=101&&0<=y<=101&&0<=z<=101)
    {
        printf("Hufflepuff");
    }
    else
    {
        printf("NOTA");
    }
}