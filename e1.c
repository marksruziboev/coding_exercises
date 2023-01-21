#include<unistd.h>
#include<stdio.h>

int ft_mltp35(int n)
{
    int k;
    int sum;

    k = 1;
    sum = 0;
    while ( k < n)
    {
        if (k % 3 == 0 || k % 5 == 0)
            sum = sum + k;
        k++;
    }
    return(sum);
}

int main()
{
    printf("%d", ft_mltp35(1000));
}
