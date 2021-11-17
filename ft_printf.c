#include <stdarg.h>
#include "libft.h"

void	ft_printf(const char *s, ...)
{
	va_list	ptr;
	int		i;
	int	n;

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
	if (!n)
	{
		//ft_putstr_fd((char *)s, 1);
		//return (i);
	}
	va_start(ptr, s);
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == 'c')
			{
				ft_putchar_fd(va_arg(ptr, int), 1);
				i++;
			}
			else if (s[i] == 's')
			{
				ft_putstr_fd(va_arg(ptr, char *), 1);
				i++;
			}
			else if (s[i] == 'p')
			{
				ft_putstr_fd(va_arg(ptr, int), 1);
				i++;
			}
			else if (s[i] == 'd')
			{
				ft_putnbr_fd(va_arg(ptr, int), 1);
				i++;
			}
			else if (s[i] == 'i')
			{
				ft_putnbr_fd(va_arg(ptr, int), 1);
				i++;
			}
			else if (s[i] == 'u')
			{
				ft_putnbr_fd(va_arg(ptr, int), 1);
				i++;
			}
			else if(s[i] == 'x')
			{
				ft_putnbr_fd(va_arg(ptr, int), 1);
				i++;
			}
			else if (s[i] == 'X')
			{
				ft_putnbr_fd(va_arg(ptr, int), 1);
				i++;
			}
			else 
			{
				ft_putchar_fd(s[i], 1);
				i++;
			}
		}
		else
		{
			ft_putchar_fd(s[i], 1);
			i++;
		}
	}
	va_end(ptr);
}
