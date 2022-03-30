











#include "header.h"

int	ft_printf(const char *s, ...)
{
	va_list	ellipse;
	t_data	data;

	data.pos = 0;
	va_start(ellipse, s);
	while(ft_putstr_printf(s, &data))
	{
		if (ft_convchr(s, &data))
		{
			ft_convselect(s, &data, &ellipse);
		}
	}
	va_end(ellipse);
	return (0);
}

int	main()
{
	char *s = "%%Testé par %d mes soins.\n";

//	printf("%s", s);
//	printf("Testé par mes soins.\n");

//	ft_printf("Testé par mes soins.\n");
//	ft_printf("%s", s);

	ft_printf("%%Testé par %d mes soin%c.\n%s", 12, 'S', s);
	write(1, "---\n", 4);
	printf("%%Testé par %d mes soin%c.\n%s", 12, 'S', s);

	return (0);
}
