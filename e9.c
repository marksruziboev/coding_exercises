#include<unistd.h>
#include<stdio.h>
int ft_pifagor(void)
{
    int a;
    int b;
    int c;
    int e;

    a = 1;
    while (a < 998)
    {
        b = a + 1;
        while (b + a < 999)
        {
            c = 1000 - a - b;
            if (a*a + b*b == c*c)
            {
                return(a*b*c);
            }

            b++;
        }
        a++;
    }
}

int main()
{
    //ft_pifagor();
    printf("%d", ft_pifagor());
    return (0);
}
