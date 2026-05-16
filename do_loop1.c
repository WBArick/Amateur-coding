#include<stdio.h>
int main ()
{
    int numb,sum=0;
    do
    {
        printf("Enter a positive number:");
        scanf("%d",&numb);
        if(numb>=0)
          sum=sum+numb;
    } while (numb>=0);
    printf("Total=%d\n",sum);
    return 0;
    

}