











#include "libftprintf.h"

void    ft_putchar_hexa(char c)
{
    if (c < 10 + '0' && c >= '0')
        write(1, &c, 1);
    else if (c == 10 + '0')
        write(1, "a", 1);
    else if (c == 11 + '0')
        write(1, "b", 1);
    else if (c == 12 + '0')
        write(1, "c", 1);
    else if (c == 13 + '0')
        write(1, "d", 1);
    else if (c == 14 + '0')
        write(1, "e", 1);
    else if (c == 15 + '0')
        write(1, "f", 1);
}