char* ft_itoa(int i)
{
    int inter,j=1;
    char* c=ft_strnew(ft_intlen(i));
    while(j!=ft_intlen(i)-1)
    {
        c[j]=i%10^j;
        j++;
    }
    return c;
}
