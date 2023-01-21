#include<unistd.h>
#include<stdio.h>

int ft_isprime(long long int n)
{
    long long int i;

    if (n <= 1)
        return (0);
    i = 2;
    while (i*i <= n + 1)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (1);
}
int main()
{
    long long int sum;
    long long int n;

    sum = 0;
    n = 2;
    while (n <= 2000000)
    {
        if (ft_isprime(n) == 1)
            {
                printf("%lld", n);
                sum = sum + n;
            }
        n++;
    }
    printf("%lld", sum);
    return (0);
}
