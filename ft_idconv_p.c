/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_idconv_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:46:19 by tda-silv          #+#    #+#             */
/*   Updated: 2022/03/31 17:46:42 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_idconv_p(t_data *data, va_list *ellipse)
{
	write(1, "0x", 2);
	data->p = va_arg(*ellipse, unsigned long long int);
	ft_putnbr_hexa(data->p);
	data->pos += 1;
}

//	Idicateur de conversion "p" :
//	Affiche l’argument d'un "void *" en hexadécimal avec le préfixe "0x".
