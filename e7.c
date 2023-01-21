#include<unistd.h>
#include<stdio.h>
int ft_isprime(int n)
{
    int i;

    i = 2;
    if (n == 1)
        return (0);
    while (i < n / i + 1)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (1);
}
int main()
{
   int  n = 2;
   int  count = 0;

   while ( n > 0)
   {
       if (ft_isprime(n) == 1)
       {
        count++;
        if (count == 10001)
        break ;
       }
        n++;
   }
   printf(" %d", n);
   return (0);
}
