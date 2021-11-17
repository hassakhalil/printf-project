#include "ft_printf.h"

void	ft_putnbr(int n, int *l)
{
	char	c;
	long	x;

	x = n;
	if (x < 0)
	{
		write(1, "-", 1);
		x = x * (-1);
		(*l)++;
	}
	if (x > 9)
	{
		ft_putnbr(x / 10, l);
		ft_putnbr(x % 10, l);
	}
	else
	{
		c = x + '0';
		write(1, &c, 1);
		(*l)++;
	}
}
