/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_idconv_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:28:32 by tda-silv          #+#    #+#             */
/*   Updated: 2022/03/31 17:29:09 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_idconv_s(t_data *data, va_list *ellipse)
{
	data->s = va_arg(*ellipse, char *);
	ft_putstr(data->s);
	data->pos += 1;
}

//	Idicateur de conversion "s" :
//	Affiche une chaîne de caractère (char *).
