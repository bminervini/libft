#include <unistd.h>
#include "libft.h"

void ft_putstr(char* c)
{
    write(1, c, ft_strlen(c));
}


