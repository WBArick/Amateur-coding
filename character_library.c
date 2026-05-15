#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    printf("Enter a character:");
    x=getchar();
    if(isalpha(x))
    {
        printf("The character is an alphabet.\n");
    }
    else
    {
        printf("The character is not an alphabet.\n");
    }
    return 0;



    

    
}