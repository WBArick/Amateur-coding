#include<stdio.h>
int main()
{
    int x=10;
    int *ptr=&x;
    int **pptr=&ptr;
    printf("Value pointed by p (value of x) = %d\n", *ptr);
    printf("value of p (Address of x) = %p\n", ptr);
    printf("Value of p = %p\n", pptr);
    printf("Value of x = %d\n", *(*pptr));
    return 0;
}