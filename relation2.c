#include<stdio.h>
int main ()
{
    int numb1,numb2;
    printf("Enter the first number:");
    scanf("%d",&numb1);
    printf("Enter the second number:");
    scanf("%d",&numb2);
    if (numb1>numb2)
    {
        printf("number1 is bigger than number2\n");
    }
    else
    {
        printf("number1 is not bigger than number2\n");
    }
    return 0;
}            
