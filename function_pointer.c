#include<stdio.h>
void add(int a, int b);
void mul(int a, int b);
int main()
{
    void(*p)(int,int);
    int x,y;
    int option;
    printf("Enter two numbers in a single line:\n");
    scanf("%d %d", &x, &y);
    printf("Enter one option- Add(1) / Multiply(2): ");
    scanf("%d", &option);
    if(option==1)
    {
        p=add;
    }
    else if(option==2)
    {
        p=mul;
    }
    else
    {
        printf("Invalid option\n");
        p=0;
    }
     if(p)
         (*p)(x,y);

}
void add(int a,int b)
{
    printf("Sum=%d\n",a+b);

}
void mul(int a, int b)
{
    printf("Product=%d\n", a*b);
}