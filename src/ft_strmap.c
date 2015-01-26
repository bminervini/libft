

char*   ft_strmap(char* s, void f(char))
{
    char*   r = s;
    if (f)
    {
        while (*s)
            f(*s++);
    }
    return r;
}
