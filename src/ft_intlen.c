int ft_intlen(int i)
{
    int x=10;
    int n=1;
    while(i%x!=i)
    {
        x=x*10;
        n += 1;
    }

    return n;
}
