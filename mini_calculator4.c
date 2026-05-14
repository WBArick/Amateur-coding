#include<stdio.h>
int main ()
{
    float numb1,numb2,sum,division;
    printf("Enter the first number");
    scanf("%f",&numb1);
    printf("Enter the second number");
    scanf("%f",&numb2);
    sum=numb1+numb2;
    printf("sum=%f\n",sum);
    division=numb1-numb2;
    printf("division=%f\n",division);
    return 0;
}