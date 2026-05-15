#include<stdio.h>
#include<ctype.h>
int main ()
{
    char x;
    printf("Enter a character:");
    x=getchar();
    if(isdigit(x))
    {
        printf("The character is a digit\n");
    }
    else
    {
        printf("The character is not a digit\n");
    }
    return 0;
}
