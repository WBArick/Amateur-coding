#include<stdio.h>
int main(void)
{
    long long army1 , army2;
    int i;
    while(scanf("%lld %lld", &army1, &army2) != EOF)
    {
      
     if(army1 > army2)
       {
          printf("%lld\n", army1 - army2);
       }
     else
       {
          printf("%lld\n", army2 - army1);
       }
    }  
     
 return 0;
}
