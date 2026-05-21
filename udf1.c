#include<stdio.h>
void add();
int main ()

{
    add();
    add();
    add();
    return 0;

}
void add()
{
    int x,y;
    printf("Enter the first number:");
    scanf("%d",&x);
    printf("Enter the second number:");
    scanf("%d",&y);
    
    printf("Sum=%d\n",x+y);

}