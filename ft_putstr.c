











#include "header.h"

void    ft_putstr(const char *s)
{
	size_t	i;

	i = 0;
    while (s[i])
        write (1, &s[i++], 1);
}