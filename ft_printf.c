#include <stdarg.h>
#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	ptr;
	int		i;
	int		n;
	int		l;

	i = 0;
	n = 0;
	if (s[i] == '%')
	{
		n++;
		i++;
	}
	while (s[i])
	{
		if (s[i] == '%' && s[i-1] != '%')
			n++;
		i++;
	}
	l = 0;
	if (!n)
	{
		ft_putstr((char *)s, &l);
		return (l);
	}
	va_start(ptr, s);
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == 'c')
				ft_putchar(va_arg(ptr, int), &l);
			else if (s[i] == 's')
			{
				if(!ft_putstr(va_arg(ptr, char *), &l))
					ft_putstr("(null)", &l);
			}
			else if (s[i] == 'p')
			{
				ft_putstr("0x", &l);
				ft_putnbr(va_arg(ptr, int), &l);
			}
			else if (s[i] == 'd')
				ft_putnbr(va_arg(ptr, int), &l);
			else if (s[i] == 'i')
				ft_putnbr(va_arg(ptr, int), &l);
			else if (s[i] == 'u')
				ft_putnbr(va_arg(ptr, int), &l);
			else if(s[i] == 'x')
			{
				ft_putnbr(va_arg(ptr, int), &l);
			}
			else if (s[i] == 'X')
				ft_print_hex(va_arg(ptr, int), &l);
			else
				ft_putchar(s[i], &l);
		}
		else
			ft_putchar(s[i], &l);
		i++;
	}
	va_end(ptr);
	return (l);
}
