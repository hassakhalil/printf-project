#include "ft_printf.h"

void	ft_print_base(int n, char* base,int size, int *l)
{
	unsigned long	nb;

	nb = n;
	if (nb >= (unsigned long)size)
		ft_print_base((nb/size), base, size, l);
	ft_putchar(base[nb % size], l);
}
