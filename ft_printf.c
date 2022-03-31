/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:17:02 by tda-silv          #+#    #+#             */
/*   Updated: 2022/03/31 15:22:09 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *s, ...)
{
	va_list	ellipse;
	t_data	data;

	data.pos = 0;
	va_start(ellipse, s);
	while (ft_putstr_printf(s, &data))
		if (ft_convchr(s, &data))
			ft_convselect(s, &data, &ellipse);
	va_end(ellipse);
	return (0);
}
/*
int	main()
{
	char			*s = "%%Testé par %d mes soins.\n";
	int				d = 2147483647;
	int				dd = -2147483648;
	void			*p = (long long int *)-9223372036854775807;
	void			*pp = (long long int*)9223372036854775807;
	unsigned int	u = 4294967295;
	

	ft_printf("%%Testé par %d mes soin%c.\n%s%p\n%p\n%d\n%d\n%u\n%x\n%x\n%X\n%i\
n", 12, 'S', s, p, pp, d, dd, u, d, dd, d, u);
	write(1, "---\n", 4);
	printf("%%Testé par %d mes soin%c.\n%s%p\n%p\n%d\n%d\n%u\n%x\n%x\n%X\n%i\n"
, 12, 'S', s, p, pp, d, dd, u, d, dd, d, u);

	return (0);
}
*/
