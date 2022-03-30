











#include "libftprintf.h"

void    ft_idconv_u(t_data *data, va_list *ellipse)
{
    data->u = va_arg(*ellipse, unsigned int);
    ft_putnbr_unsigned(data->u);
    data->pos += 1;
}

//  Idicateur de conversion "u" :
//  Affiche un "unsigned int".