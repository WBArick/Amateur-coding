#include<stdio.h>
struct A
{
    int x;
    float y;
    char z;
};
union B
{
    int p;
    float q;
    char r;
};
int main()
{
    struct A a;
    union B b;
    printf("Size of variable a=%d bytes\n",sizeof(a));
    printf("Size of variable b=%d bytes \n",sizeof(b));
    return 0;
}