











#include "libftprintf.h"

int	ft_convchr(const char *s, t_data *data)
{
	size_t	i;

	i = 0;
	while ((s + data->pos)[i])
	{
		if ((s + data->pos)[i] == '%')
        {
            data->pos += i + 1;
            return (1);
        }
		i++;
	}
    return (0);
}

//  Cherche une spécification de conversion (%) dans une chaîne de caractères (s).
//  Si un '%' est trouvé, renvoie 1 et modifie la valeur de "pos" dans la structure t_ellipse e.
//  Si aucun '%' n'est trouvé, renvoie 0.