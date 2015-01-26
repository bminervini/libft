#include <stdlib.h>
#include "libft.h"

int main(int argc, char** argv)
{
    char* s = "coucou";
    char* r = NULL;
    r = ft_strmap(s, &ft_putchar);
    ft_putstr(r);
    return 0;
}


