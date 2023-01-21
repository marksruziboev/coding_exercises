#include<unistd.h>
#include<stdio.h>

int ft_fibb(int n)
{
    if (n <= 0)
        return (0);
    else if (n == 1)
        return (1);
    else
        return (ft_fibb(n - 1) + ft_fibb(n - 2));
}
int main()
{
    int k = 0;
    int sum = 0;
    while (1)
    {
        if (ft_fibb(k) % 2 == 0 && ft_fibb(k) < 4000000)
        {
            sum = sum + ft_fibb(k);
        }
        else if (ft_fibb(k) > 4000000)
            break ;
        k++;
    }
    printf("%d\n", sum);
    return (0);
}
