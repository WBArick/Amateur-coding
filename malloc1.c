#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=malloc(sizeof(int)*3);
    *p=11;
    *(p+1)=22;
    *(p+2)=33;
    printf("%d %d %d\n",*p,*(p+1),*(p+2));
    return 0;
    free(p);

}