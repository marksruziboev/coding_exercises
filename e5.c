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
   int  n = 20;
   int  p = 1;

   while (n > 0)
   {
       if (ft_isprime(n) == 1)
       {
        p = p * n;
        printf("%d\n", n);
       }
       n--;
   }
   p = p*3*8;
   printf("1 dan 20 gacha sonlarga bo'linuvchi eng kichik son %d", p);
   return (0);
}
