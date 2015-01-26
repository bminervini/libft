#include <unistd.h>
#include "libft.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char* c)
{
    write(1, c, ft_strlen(c));
}


