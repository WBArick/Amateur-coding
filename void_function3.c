#include<stdio.h>
#define PI 3.1416
double circle_area(double r); //here we are telling the program that this function will come later
int main()
{
    double r;
    printf("Enter the radius:");
    scanf("%lf",&r);//we stored the value of r inside the main function, then we are going to pass it 
    circle_area(r);//we are calling the function with its name and by the value of r
    return 0;

}
double circle_area(double r)//By writing the double r inside the bracket, we are actually passing the value of r here
{
    double area;//area is a variable of this function, it has nothing to do with the main function and we dont even have to mention it inside the main function
    area= PI*r*r;
    printf("Area = %.2f", area);
}