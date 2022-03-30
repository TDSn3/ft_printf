











#include "libftprintf.h"

void    ft_putchar_hexa_cap(char c)
{
    if (c < 10 + '0' && c >= '0')
        write(1, &c, 1);
    else if (c == 10 + '0')
        write(1, "A", 1);
    else if (c == 11 + '0')
        write(1, "B", 1);
    else if (c == 12 + '0')
        write(1, "C", 1);
    else if (c == 13 + '0')
        write(1, "D", 1);
    else if (c == 14 + '0')
        write(1, "E", 1);
    else if (c == 15 + '0')
        write(1, "F", 1);
}