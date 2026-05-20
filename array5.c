#include<stdio.h>
int main ()
{
    int sales[6][3]=
    {
        {15,8,6},
        {25,15,8},
        {10,16,3},
        {12,8,13},
        {7,15,11},
        {20,16,12},
    };
    printf("Sales on Tuesday:\nShirts:%d Pants:%d Ties:%d\n",sales[2][0],sales[2][1],sales[2][2]);
    printf("Shirt sales for the whole week:\nSunday:%d\nMonday:%d\nTuesday:%d\nWednesday:%d\nThursday:%d\nFriday:%d\n",sales[0][0],sales[1][0],sales[2][0],sales[3][0],sales[4][0],sales[5][0]);
    return 0;
}