











#include "libftprintf.h"

void    ft_putnbr_hexa(unsigned long long int nbr)
{
    if (nbr > 15)
        ft_putnbr_hexa(nbr / 16);
    ft_putchar_hexa(nbr % 16 + '0');
}