#include<stdio.h>
int factorial(int n);
int main()
{
    printf("Factorial of 3 is %d", factorial(3));
    return 0;
}
int factorial(int n)
{
    if(n!=1)
    {
        return n* factorial(n-1);
    }
    else
    return 1;
}