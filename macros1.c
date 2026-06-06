#include<stdio.h>
#define MAX(a,b) (a>b? a:b)
#define MIN(a,b) (a<b? a:b)
int main()
{
    int x,y;
    printf("Enter two numbers in a single line: ");
    scanf("%d %d",&x, &y);
    printf("Max of the two numbers=%d\n", MAX(x,y));
    printf("Min of the  two numbers=%d\n",MIN(x,y));
    return 0;
}