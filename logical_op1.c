#include<stdio.h>
int main()
{
    int numb1;
    printf("Enter the number:");
    scanf("%d",&numb1);
    if ((numb1>=100)&&(numb1<=200))
    {
        printf("The number is within the range");
    }
    else
    {
        printf("The number is not within the range");
    }
    return 0;
}    

    
    