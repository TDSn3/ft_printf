











#include "libftprintf.h"

void    ft_idconv_p(t_data *data, va_list *ellipse)
{
    write(1, "0x", 2);
    data->p = va_arg(*ellipse, unsigned long long int);
    ft_putnbr_hexa(data->p);
    data->pos += 1;
}

//  Idicateur de conversion "p" :
//  Affiche l’argument d'un "void *" en hexadécimal avec le préfixe "0x".