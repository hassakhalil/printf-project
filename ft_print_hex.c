#include "ft_printf.h"

void	ft_print_hex(int n, char* base,int size, int *l)
{
	unsigned long	nb;

	nb = n;
	if (nb >= (unsigned long)size)
		ft_print_hex((nb/size), base, size, l);
	write(1, &base[nb % size], 1);
	(*l)++;
}
