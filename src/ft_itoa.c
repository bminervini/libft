char* ft_itoa(int i)
{
    int x=10;
    char* n;
    while(i%x!=i)
    {
        n += ((i%x)+48);
        x=x*10;
    }
    return n;
}
