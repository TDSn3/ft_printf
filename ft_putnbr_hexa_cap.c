/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa_cap.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:33:11 by tda-silv          #+#    #+#             */
/*   Updated: 2022/03/31 15:53:55 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hexa_cap(unsigned int nbr)
{
	if (nbr > 15)
		ft_putnbr_hexa_cap(nbr / 16);
	ft_putchar_hexa_cap(nbr % 16 + '0');
}
