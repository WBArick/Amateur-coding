#include<stdio.h>
#include<string.h>
int main ()
{
    char city[20];
    printf("Enter a city name:");
    scanf("%s",city);
    printf("Lenght of the string=%d\n",strlen(city));
    return 0;
}