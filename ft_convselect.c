











#include "libftprintf.h"

void    ft_convselect(const char *s, t_data *data, va_list *ellipse)
{
    if (s[data->pos] == 'd' || s[data->pos] == 'i')
        ft_idconv_d_i(data, ellipse);
    else if (s[data->pos] == 'c')
        ft_idconv_c(data, ellipse);
    else if (s[data->pos] == 's')
        ft_idconv_s(data, ellipse);
    else if (s[data->pos] == 'p')
        ft_idconv_p(data, ellipse);
    else if (s[data->pos] == 'u')
        ft_idconv_u(data, ellipse);
    else if (s[data->pos] == 'x')
        ft_idconv_x(data, ellipse);
    else if (s[data->pos] == 'X')
        ft_idconv_x_cap(data, ellipse);
    else if (s[data->pos] == '%')
    {
        write(1, "%%", 1);
        data->pos += 1;
    }
}

//  Cherche une indicateur de conversion ('d', 'i', 'c', 's', 'p', 'u', 'x', 'X' ou '%').