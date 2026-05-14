#include<stdio.h>
#include<math.h>
int main ()
{
    int numb;
    float Result;
    printf("Enter the number:");
    scanf("%d",&numb);
    Result=sqrt(numb);
    printf("Result=%.2f\n",Result);
    return 0;
}