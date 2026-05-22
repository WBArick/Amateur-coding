#include<stdio.h>
#include<string.h>
struct person
{
    char name[20];
    int age;
};
int main()
{
    struct person p1;
    struct person p2={"Dragon",3000};
    struct person * pointer1;
    struct person * pointer2;
    pointer1=&p1;
    pointer2=&p2;
    strcpy(p1.name,"Arick");
    p1.age=20;
    printf("%s %d\n",p1.name,p1.age);
    printf("%s %d\n",p2.name,p2.age);
    printf("%s %d\n",pointer1->name,pointer1->age);
    printf("%s %d\n",pointer2->name,pointer2->age);
    return 0;

}