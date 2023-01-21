#include <stdio.h>

int main()
{
    long long int n = 10;
    long long int k, c;
    long long int max = 1;

    while (n <= 1000000)
    {
        k = n;
        c = 1;
        while (k > 1)
        {
            if (k % 2 == 0)
                k = k / 2;
            else if (k % 2 != 0)
                k = 3 * k + 1;
                c++;
        }
        if (max < c)
        {
            max = c;
            printf("The lengths of chain is %lld, it is achieved at %lld\n ", c + 1, n);
        }
        n++;
    }
    printf("The lengths of largest chain %d\n ", max);
    return(0);
}
