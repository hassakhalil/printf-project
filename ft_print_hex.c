#include "ft_printf.h"

void	ft_print_hex(int n, char* base, int *l)
{
	unsigned long	nb;

	nb = n;
	if (nb >= 16)
		ft_print_hex((nb/16), base, l);
	write(1, &base[nb % 16], 1);
	(*l)++;
}
