#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int m = 1, M = 1, l = 1;

    while (l <= 20)
    {
       M = M * (l + 20);
       m = m * l;
       if ( M % m == 0)
       {
           M = M / m;
           m = 1;
       }
       l++;
    }
    printf("%lld", M);
    return (0);
}
