#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char* ft_itoa(int i)
{
    int j=1,exp,a,len = ft_intlen(i),carac;

    char* c = ft_strnew(len);

    while(len != 0)
    {
        carac = (i % (int)pow(10,len));
        printf("%d",carac);
        len--;
    }
    return c;
}
int main(int argc, char *argv[])
{
    ft_itoa(125);
    return 0;
}
