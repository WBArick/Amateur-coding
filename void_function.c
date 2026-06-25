#include<stdio.h>
void add_int();
void add_float();
int main()
{
    add_int();
    add_float();

    return 0;
}
void add_int()
{
    int x,y;
    int z;
    printf("Enter the first integer number:");
    scanf("%d", &x);
    printf("Enter the second integer number:");
    scanf("%d", &y);
    z=x+y;
    printf("Sum=%d\n", z);
}
void add_float()
{
    float a,b;
    float c;
    printf("Enter the first floating number:");
    scanf("%f", &a);
    printf("Enter the second floating number:");
    scanf("%f", &b);
    printf("Sum=%.2f", c=a+b);
    
}