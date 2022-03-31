/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:08:57 by tda-silv          #+#    #+#             */
/*   Updated: 2022/03/31 16:09:33 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_hexa(unsigned long long int nbr)
{
	if (nbr > 15)
		ft_putnbr_hexa(nbr / 16);
	ft_putchar_hexa(nbr % 16 + '0');
}
