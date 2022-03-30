











#include "libftprintf.h"

void    ft_putnbr_hexa_cap(unsigned int nbr)
{
    if (nbr > 15)
        ft_putnbr_hexa_cap(nbr / 16);
    ft_putchar_hexa_cap(nbr % 16 + '0');
}