#include<stdio.h>
#include<ctype.h>
int main ()
{
    int i;
    for(i='A';i<='Z';i++)
    {
        printf("%c→%d\n",i,i);
    }
    return 0;
}