/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_idconv_d_i.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:54:13 by tda-silv          #+#    #+#             */
/*   Updated: 2022/03/31 15:54:46 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_idconv_d_i(t_data *data, va_list *ellipse)
{
	data->d = va_arg(*ellipse, int);
	ft_putnbr_int(data->d);
	data->pos += 1;
}

//	Idicateur de conversion "d" ou "i" :
//	Affiche un "int".
