











#include "libftprintf.h"

void    ft_idconv_x_cap(t_data *data, va_list *ellipse)
{
    data->u = va_arg(*ellipse, unsigned int);
    ft_putnbr_hexa_cap(data->u);
    data->pos += 1;
}

//  Idicateur de conversion "x" :
//  Affiche un "unsigned int" en hexadécimal avec des lettres majuscules.