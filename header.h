











#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

typedef struct	s_data
{
	char	c;
	char	*s;
	int		d;
    size_t  pos;
}				t_data;

void    ft_putchar(char c);
void    ft_putstr(const char *s);
void    ft_putnbr(int nbr);
int     ft_putstr_printf(const char *s, t_data *data);
int	    ft_convchr(const char *s, t_data *data);
void    ft_convselect(const char *s, t_data *data, va_list *ellipse);
int     t_printf(const char *s, ...);

#endif
