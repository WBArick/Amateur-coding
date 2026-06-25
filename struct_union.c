#include<stdio.H>
int main()
{
    struct A
    {
        int x;
        float y;
        char z;
    };
    union B
    {
        int a;
        float b;
        char c;
    };
    printf("Size of structure A = %d bytes\n", sizeof(struct A));
    printf("Size of Union B = %d bytes\n", sizeof(union B));
    struct A m={ 10, 25.54, '$'};
    printf("%d %f %c\n",m.x, m.y, m.z);
    union B n;
    n.a=100;
    n.c='$';
    n.b=22.53;
    printf("%d %c %f\n",n.a, n.c, n.b);
    return 0;
}