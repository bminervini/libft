#include <stdlib.h>
#include "libft.h"

int main(int argc, char** argv)
{

    char* pointeur = ft_strnew(5);
    ft_putstr(pointeur);
    free(pointeur);
    return 0;
}
