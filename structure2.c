#include<stdio.h>
#include<string.h>
struct person
{
    char name[20];
    int age;
};
int main()
{
    struct person a[2];
    struct person * pointer;
    pointer=a;
    strcpy(a[0].name, "Dragon");
    a[0].age=3000;
    strcpy(a[1].name,"Vampire");
    a[1].age=500;
    printf("First person name:%s, age:%d\n",a[0].name,a[0].age);
    printf("Second person name:%s, age:%d\n",a[1].name,a[1].age);
    printf("First person name:%s, age:%d\n",pointer->name,pointer->age);
    pointer++;
    printf("First person name:%s, age:%d\n",pointer->name,pointer->age);
    return 0;

}