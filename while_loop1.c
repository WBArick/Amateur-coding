#include<stdio.h>
int main ()
{
    int numb=0,sum=0;
    while(numb>=0)
    {
        printf("Enter a positive number:");
        scanf("%d",&numb);
        if(numb>=0)
        {
         sum+=numb;
        } 
    }
 printf("Total=%d\n",sum);
 return 0;
}