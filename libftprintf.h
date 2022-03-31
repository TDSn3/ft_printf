/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:29:46 by tda-silv          #+#    #+#             */
/*   Updated: 2022/03/31 17:35:59 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

typedef struct s_data
{
	char					c;
	char					*s;
	int						d;
	unsigned long long int	p;
	unsigned int			u;
	size_t					pos;
}	t_data;

void	ft_putchar(char c);
void	ft_putchar_hexa(char c);
void	ft_putchar_hexa_cap(char c);
void	ft_putstr(const char *s);
void	ft_putnbr_int(int nbr);
void	ft_putnbr_unsigned(unsigned int nbr);
void	ft_putnbr_hexa(unsigned long long int nbr);
void	ft_putnbr_hexa_cap(unsigned int nbr);
int		ft_putstr_printf(const char *s, t_data *data);
int		ft_convchr(const char *s, t_data *data);
void	ft_convselect(const char *s, t_data *data, va_list *ellipse);
void	ft_idconv_d_i(t_data *data, va_list *ellipse);
void	ft_idconv_c(t_data *data, va_list *ellipse);
void	ft_idconv_s(t_data *data, va_list *ellipse);
void	ft_idconv_p(t_data *data, va_list *ellipse);
void	ft_idconv_u(t_data *data, va_list *ellipse);
void	ft_idconv_x(t_data *data, va_list *ellipse);
void	ft_idconv_x_cap(t_data *data, va_list *ellipse);
int		t_printf(const char *s, ...);

#endif
