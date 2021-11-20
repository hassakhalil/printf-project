#include "ft_printf.h"

void	ft_putnbr_fd(int n, int *l)
{
	char	c;
	long	x;

	x = n;
	if (x < 0)
	{
		write(1, "-", 1);
		x = x * (-1);
		l++;
	}
	if (x > 9)
	{
		ft_putnbr_fd(x / 10);
		ft_putnbr_fd(x % 10);
	}
	else
	{
		c = x + '0';
		write(1, &c, 1);
		l++;
	}
}
