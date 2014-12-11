#include <stdlib.h>

char* ft_strnew(int csize)
{
    char* r;

    r = (char*)malloc(csize * sizeof(char) + 1);
    return r;
}


