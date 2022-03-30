











#include "header.h"

void    ft_convselect(const char *s, t_data *data, va_list *ellipse)
{
    if (s[data->pos] == 'd')
    {
        data->d = va_arg(*ellipse, int);
        ft_putnbr(data->d);
        data->pos += 1;
    }

    else if (s[data->pos] == 'c')
    {
        data->c = va_arg(*ellipse, int);
        write(1, &data->c, 1);
        data->pos += 1;
    }

    else if (s[data->pos] == 's')
    {
        data->s = va_arg(*ellipse, char *);
        ft_putstr(data->s);
        data->pos += 1;
    }

    else if (s[data->pos] == '%')
    {
        write(1, "%%", 1);
        data->pos += 1;
    }
}