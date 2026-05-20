#include<stdio.h>
int main ()
{
    int a[3][4]=
    {
        {11,12,13,14},
        {21,22,23,24},
        {31,32,33,34},
    };
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");    
    }
    return 0;
}