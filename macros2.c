#include<stdio.h>
#define PI 3.1416
int main()
{
    float radius;
    printf("Enter the radius:");
    scanf("%f",&radius);
    printf("Perimeter of the circle=%.2f\n",2*PI*radius);
    printf("Area of the circle=%.2f\n",PI*radius*radius);
    return 0;
}