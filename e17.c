#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int lugat(int n)
{
    if (n == 0)
        return(0);
    else if (n == 1)
        return(3);//;("one");
    else if (n == 2)
        return(3);//("two");
    else if (n == 3)
        return (5);//("three");
    else if (n == 4)
        return (4);// ("four");
    else if (n == 5)
        return (4);//("five");
    else if (n == 6)
        return (3);//("six");
    else if (n == 7)
        return (5);//("seven");
    else if (n == 8)
        return (5);//("eight");
    else if (n == 9)
        return (4);//("nine");
    else if (n == 10)
        return (3);//("ten");
    else if (n == 11)
        return (6);//("eleven");
    else if (n == 12)
        return (6);//("twelve");
    else if (n == 13)
        return (8);//("thirteen");
    else if (n == 14)
        return (8);//("fourteen");
    else if (n == 15)
        return (7);//("fifteen");
    else if (n == 16)
        return (7);// ("sixteen");
    else if (n == 17)
        return (9);// ("seventeen");
    else if (n == 18)
        return(8);// ("eighteen");
    else if (n == 19)
        return(8);// ("nineteen");
    else if (n == 20)
        return(6);// ("twenty");
    else if (n == 30)
        return(6);// ("thirty");
    else if (n == 40)
          return(5); //("forty");
    else if (n == 50)
        return(5);// ("fifty");
    else if (n == 60)
        return(5);// ("sixty");
    else if (n == 70)
        return(7);// ("seventy");
    else if (n == 80)
        return(6);// ("eighty");
    else if (n == 90)
        return(6);// ("ninety");
    else if (n == 100)
        return(7); //("hundert");
    else if (n == 1000)
        return(11);// ("onethousand");

}
int lenword(int n)
{
    if ((n %10 == 0 && n < 100)|| n == 1000)
        return(lugat(n));
    else if (n >= 100 && n < 1000 && n % 100 == 0)
        return(lugat(n/100)+ lugat(100));
    else if (n >= 1 && n < 20)
        return(lugat(n));
    else if (n > 20 && n < 100)
        return(lugat(n - n%10)+ lugat(n%10));
    else if (n > 100 && n < 1000 && n%100 <= 20)
        return(lugat(n/100) + lugat(100) + 3 + lugat(n%100));
    else if (n > 100 && n < 1000 && n%100 > 20)
        return(lugat(n/100) + lugat(100) + 3 + lugat(10*((n%100)/10))+ lugat((n%100)%10));
}
int main()
{
    int n = 1, sum = 0;
    while (n <= 1000)
    {
        sum = sum + lenword(n);
        n++;
    }
    printf("%d", sum);

    return(0);
}
