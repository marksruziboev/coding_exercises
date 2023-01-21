#include<unistd.h>
#include<stdio.h>

void ft_palindr(void)
{
    int i = 100;
    int j;
    int k;
    int pal = 11;
    while (i < 1000)
    {
        j = i + 1;
        while (j < 1000)
        {
           k = j*i;
           if ((k > 99999 && k / 100000 == k % 10)
              && (k / 10000) % 10 == (k /10) % 10 &&
                    (k / 1000) % 10 == (k /100) % 10)
              {
                  if (pal < k)
                    pal = k;
              }
           j++;
        }
        i++;
    }
    printf("%d", pal);
}
int main()
{
   ft_palindr();
   return (0);
}
