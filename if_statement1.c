#include<stdio.h>
int main()
{
    int color;
    printf("Enter the color code:");
    scanf("%d",&color);
    if(color==1)
    {
        printf("Blue\n");
    }
    else if (color==2)
    {
        printf("Red\n");
    }
    else if (color==3)
    {
        printf("Black\n");
    }
    else
    printf("Invalid Color\n");
    return 0;
    
    
}