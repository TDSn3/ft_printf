











#include "header.h"

void    ft_putnbr(int nbr)
{
    if (nbr == -2147483648)
        write(1, "-2147483648", 11);
    else
    {
        if (nbr < 0)
        {
            nbr *= -1;
            write(1, "-", 1);
        }
        if (nbr > 9)
            ft_putnbr(nbr / 10);
        ft_putchar(nbr % 10 + '0');
    }
}