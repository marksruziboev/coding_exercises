#include<unistd.h>
#include<stdio.h>
int main()
{
   int  n = 100;
   int  i = 1;
   int  s1 = 0;
   int  s2 = 0;

   while (i <= n)
   {
       s1 = s1 + i;
       s2 = s2 + i*i;
       i++;
   }
   s1 = s1 * s1;

   printf("%d", s1 - s2);
   return (0);
}
