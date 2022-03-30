











#include "libftprintf.h"

void    ft_idconv_s(t_data *data, va_list *ellipse)
{
    data->s = va_arg(*ellipse, char *);
    ft_putstr(data->s);
    data->pos += 1;
}

//  Idicateur de conversion "s" :
//  Affiche une chaîne de caractère (char *).