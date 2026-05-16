#include<stdio.h>
int main ()
{
    int color;
    printf("Enter a color(1-2):");
    scanf("%d",&color);
    if(color==1)
    {
        printf("Red\n");
        goto end;
    }
    if (color==2)
    {
        printf("Green\n");
        goto end;
    }
    else
    {
        printf("Invalid color");
    }
    end:
    return 0;

}