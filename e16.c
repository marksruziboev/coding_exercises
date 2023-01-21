#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *power(char *s)
{
    int tmp = 0;
    int i = 0;

    while(s[i])
    {
        tmp = tmp + (s[i] -'0') * 2;
        s[i] = tmp % 10 + '0';
        tmp = tmp/10;
        i++;
    }
    if (tmp != 0)
    {
        s[i] = tmp + '0';
        i++;
    }
    s[i] = '\0';
    return (s);
}

int main()
{
    int i,a = 999;
    int y = 0;
    char *s,*t;
    char z;

    s = (char *)malloc(401);
    t = (char *)malloc(401);
    s[0] = '2';
    s[1] = '\0';
    printf("%s\n", s);
    while (a > 0)
    {
        strcpy(t, power(s));
        strcpy(s, t);
        a--;
    }
    i = 0;
    while (s[i])
    {
        i++;
    }
    printf("%d\n", i);
    a = 0;
    while (a < i/2)
    {
        z = s[a];
        s[a] = s[i - a - 1];
        s[i - a - 1] = z;
        a++;
    }
    a = 0;
    while (s[a])
    {
        y = y + s[a] - '0';
        a++;
    }
    printf("%s\n", s);
    printf("%d", y);
    free(t);
    t = NULL;

    free(s);
    s = NULL;
    return(0);
}
