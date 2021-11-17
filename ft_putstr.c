#include "ft_printf.h"

int	ft_putstr(char *s, int *l)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
		(*l)++;
	}
	return (1);
}
