#include "ft_printf.h"

void	ft_print_hex(int n,int *l)
{
	int 	i;
	int		tmp;

	char *tab = malloc(11 *sizeof(char *));
	if (n < 0)
	{
		ft_putchar('-', l);
		n = n * (-1);
		l++;
	}
	tmp = 0;
	i = 0;
	while (n)
	{
		tmp = n % 16;
		if (tmp < 10)
		{
			tab[i] = tmp + 48;
			i++;
		}
		else
		{
			tab[i] = tmp + 55;
			i++;
		}
		n = n / 16;
	}
	while(i >= 0)
	{
		ft_putchar(tab[i], l);
		i--;
	}
	free(tab);
}
