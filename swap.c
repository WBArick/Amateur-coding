#include<stdio.h>
int main()
{
    int x=10,y=20;
    int a,b;
    printf("Before swapping:");
    printf("%d,%d\n",x,y);
    a=x;
    b=y;
    y=a;
    x=b;
    printf("After swapping:");
    printf("%d,%d",x,y);
    return 0;

}