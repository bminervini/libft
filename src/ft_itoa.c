#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char* ft_itoa(int i)
{
    int j = 1, len = ft_intlen(i), num;
    int divis, lenbase = len + 1;
    char* c = ft_strnew(len);

    while(j != lenbase)
    {
        divis = (int) pow(10, j);
        num = (i % (int) divis);
        divis = divis / 10;
        num = num / divis;
        i = (i - num);
        j ++;
        c[len - 1] = (num + 48);
        len --;
    }
    return c;
}


