#include<stdio.h>
int main()
{
    int a[5];
    int i;
    int numb;
    for(i=0;i<5;i++)
    {
       printf("Enter the number:");
       scanf("%d",&numb);
       a[i]=numb;
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    } 
    return 0;

}