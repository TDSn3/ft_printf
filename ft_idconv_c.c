











#include "libftprintf.h"

void    ft_idconv_c(t_data *data, va_list *ellipse)
{
    data->c = va_arg(*ellipse, int);
    write(1, &data->c, 1);
    data->pos += 1;
}

//  Idicateur de conversion "c" :
//  Affiche un "char".