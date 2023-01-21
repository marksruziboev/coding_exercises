#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *strjoin(char *u, char *v)
{
    char *s;

    s = malloc(strlen(u)+ strlen(v)+1);
    s[strlen(u)+ strlen(v)]= '\0';
    while(*u)
    {
        *s = *u;
        s++;
        u++;
    }
    while(*v)
    {
        *s = *v;
        v++;
        s++;
    }
    return(s);
}
char *str(int n)
{
    char *s;
    int a;

    s = malloc(20);
    s[0] = '0';
    s[19] = '\0';
    if (n == 1)
        return("one");
    else if ( n == 2)
        return("two");
    else if ( n == 3)
        return("three");
    else if ( n == 4)
        return("four");
    else if ( n == 5)
        return("five");
    else if ( n == 6)
        return("six");
    else if ( n == 7)
        return("seven");
    else if ( n == 8)
        return("eight");
    else if ( n == 9)
        return("nine");
    else if ( n == 10)
        return("ten");
    else if ( n == 20)
        return("twenty");
    else if ( n == 30)
        return("thirty");
    else if ( n /10 >= 4 && n/10 <= 9)
        return(strjoin(str(n/10), "ty"));
    else if ( n/100 >= 1 && n/100 <= 9)
        return(strjoin(str(n/100), "hundert"));
    else if ( n == 1000)
        return ("onethousand");
}
int main()
{
    int i = 600;
    printf("%s",str(i));
    return(0);
}
