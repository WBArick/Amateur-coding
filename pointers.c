#include<stdio.h>
int main ()
{
    int x=10;
    float y=25.78;
    char z='G';
    printf("x=%d, y=%.2f, z=%c\n", x,y,z);
    printf("Address of x=%p\n",&x);
    printf("Address of y=%p\n",&y);
    printf("Address of z=%p\n",&z);
    return 0;
}