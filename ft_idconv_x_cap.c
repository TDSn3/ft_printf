/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_idconv_x_cap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:06:59 by tda-silv          #+#    #+#             */
/*   Updated: 2022/03/31 16:07:41 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_idconv_x_cap(t_data *data, va_list *ellipse)
{
	data->u = va_arg(*ellipse, unsigned int);
	ft_putnbr_hexa_cap(data->u);
	data->pos += 1;
}

//  Idicateur de conversion "x" :
//  Affiche un "unsigned int" en hexadécimal avec des lettres majuscules.
