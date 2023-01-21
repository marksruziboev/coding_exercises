#include<unistd.h>
#include<stdio.h>

int ft_isprime(long long n)
{
    long long   k;

    k = 2;
    while (k <= n / k)
    {
        if (n % k == 0)
            return (0);
        else
            k++;
    }
    return (1);
}

int main()
{
    long long N = 600851475143;
    long long   i = 2;
    long long   max = 0;

    while (i <= N / i)
    {
        if (N % i == 0 && ft_isprime(i) == 1 && i > max)
        {
            max = i;
            printf("%d, ", max);
        }
        i++;
    }
    printf("\n Eng katta tub bo'luvchi %d, ", max);
    return(0);
    //N = 71*839*1471*6857
}
