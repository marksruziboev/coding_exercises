#include <stdio.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    static int k;
    int fd, r = 1, i, tmp;
    char buf[5500];
    char s[52];
    char lin[101][52];

    fd = open("e13.txt", O_RDONLY);
    if (fd < 0 || read(fd, 0,0)<0)
        return(-1);
    r = read(fd, buf, 5500);
    buf[r] = '\0';
    k = -1;
    i = 0;
    while (i < 100)
    {
        k++;
        while (buf[k] && buf[k] != '\n')
        {
            lin[i][k % 51] = buf[k];
            k++;
        }
        lin[i][50] = '\0';
        i++;
    }
    i = -1;
    while (++i < 100)
        printf("%s\n", lin[i]);
    i = 50;
    tmp = 0;
    while (--i >= 0)
    {
        k = -1;
        while(++k < 100)
            tmp = tmp + (lin[k][i] - '0');
        s[i+2] = (tmp % 10) + '0';
        tmp = tmp/10;
    }
    s[1] = tmp % 10 +'0';
    s[0] = tmp / 10 +'0';
    s[52] = '\0';
    printf("%s", s);

    return (0);
}
