#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// Given N = n(n+1)/2 we want to find number of divisors of N
int num_of_divisors(int n)
{
    int N,i,c;

    N = n*(n+1)/2;
    i = 2;
    c = 1;
    while (i <= N/i+1)
    {
        if (N % i == 0)
            c += 2;
        i++;
    }
    return (c);
}
int ft_strlen(int *a)
{
    int n;
    n = 0;
    while (a[n])
    {
        n = n + 1;
    }
    return (n);
}
int *lst_of_primes(int n)
{
    int *prime;
    int a,i = 0;
    int k = 4;

    prime = (int *)malloc(sizeof(int)*n +1);
    while (i < n)
    {
        prime[i] = 0;
        i++;
    }
    prime[0] = 2;
    prime[1] = 3;

    while (ft_strlen(prime) < n)
    {
        i = 0;
        while (prime[i])
        {
            a = (int)prime[i];
            //printf("|%d|", a);
            if (k % a == 0)
                break ;
            i++;
        }
        if (i == ft_strlen(prime))
            prime[i] = k;
        k++;
    }
    return(prime);
}
int     main()
{
    int n;
    n = 500;
    int i = 0;
    while (i < n)
    {
        printf("%d, ", lst_of_primes(n)[i]);
        i++;
    }
    return (0);
}

