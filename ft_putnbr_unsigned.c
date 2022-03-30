











#include "libftprintf.h"

void    ft_putnbr_unsigned(unsigned int nbr)
{
    if (nbr > 9)
        ft_putnbr_unsigned(nbr / 10);
    ft_putchar(nbr % 10 + '0');
}